//----------------------------------------
//
// Copyright © ying32. All Rights Reserved.
// 
// Licensed under Lazarus.modifiedLGPL
//
//----------------------------------------

{$MACRO ON}
{$IFDEF Windows}
  {$DEFINE extdecl := stdcall}
{$ELSE}
  {$DEFINE extdecl := cdecl}
{$ENDIF}

// 枚举都按4字节对齐
{$Z4+}

// 未正式使用此异常处理
//{$define UsehandleException}

// 异常宏定义
{$ifdef UsehandleException}
  {$define handleExceptionBegin :=try}
  {$define handleExceptionEnd :=
     except
       on E: Exception do
         CallException(E);
     end;
  }
{$else}
  {$define handleExceptionBegin :=}
  {$define handleExceptionEnd :=}
{$endif}

(*
   EventMethodName 实际的方法名称 TEventClass中的
   EventName 组件的方法名称
   EventMethod 方法
   EventMethodAddr 方法的地址
   EventMethodCode 代码段
*)
//{$DEFINE EventMethod := TEventClass.EventMethodName}
//{$DEFINE EventMethodAddr := @EventMethod}
// 事件方法定义
{$DEFINE EventMethodCode :=
    handleExceptionBegin
    if AEventData = nil then
    begin
      // 这里移除掉对象
      TLCLEvent.Remove(TMethod(AObj.EventName));
      AObj.EventName := nil;
      Exit;
    end;
    // 创建一个事件对象
    AObj.EventName := TLCLEvent.Create(AEventData).EventMethodName;
    handleExceptionEnd
}


(*
   事件中简化，暂时没用到。
*)
//{$DEFINE SendEventParams := Sender, @TEventClass.EventMethodName}



