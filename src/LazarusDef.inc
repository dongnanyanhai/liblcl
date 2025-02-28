//----------------------------------------
//
// Copyright © ying32. All Rights Reserved.
// 
// Licensed under Lazarus.modifiedLGPL
//
//----------------------------------------

// 不使用自动生成的
// 这里主要是对自动生成做兼容和补充相关

function DLibStringEncoding: TStringEncoding; extdecl;
begin
  Result := seUTF8;
end;

function DLibVersion: Cardinal; extdecl;
begin
  // 共8位，2位2位的
  Result := $02020200;
end;

// 一些初始
procedure InitLazarusDef;
begin
  // 注册与VCL中类名一致的TPngImage
  TPicture.RegisterFileFormat(TPngImage.GetFileExtensions, rsPortableNetworkGraphic, TPngImage);
end;

// 注册Lazarus资源
procedure AddLazarusResources(AName: PChar; AValueType: PChar; AValue: Pointer; ALength: NativeUInt);
var
  LRes: AnsiString;
begin
  if (ALength = 0) or (AValue = nil) then
    Exit;
  SetLength(LRes, ALength);
  Move(AValue^, LRes[1], ALength);
  LazarusResources.Add(AnsiString(AName), AnsiString(AValueType), LRes);
end;

procedure AddLazarusResources2(AName: PChar; AValueType: PChar; AValue: PChar);
begin
  if AValue = nil then
    Exit;
  LazarusResources.Add(AnsiString(AName), AnsiString(AValueType), AnsiString(AValue));
end;

// SysLocale  14byte
procedure DSysLocale(var AInfo: TSysLocale); extdecl;
begin
  AInfo := SysLocale;
end;


// TApplication
function Application_Instance: TApplication; extdecl;
begin
  Result := Application;
end;

{$IFDEF WINDOWS}
// 当IsLibrary = True时，是不会调用WidgetSet.CreateAppHandle方法
// 这时就需要手动去伪造一个 WidgetSet.AppHandle := CreateWindowsAppHandle;
// 这里的代码来自win32object.inc单元中 CreateAppHandle方法。
function CreateWindowsAppHandle: HWND;
var
  SysMenu: HMENU;
begin
  Result := CreateWindowW(@ClsNameW,
    PWideChar(UTF8ToUTF16(Application.Title)),
    WS_POPUP or WS_CLIPSIBLINGS or WS_SYSMENU or WS_MINIMIZEBOX, 0,
    0, 0, 0, 0, 0, HInstance, nil);
  if Result = 0 then
    Exit(0);
  AllocWindowInfo(Result);
  // remove useless menuitems from sysmenu
  SysMenu := Windows.GetSystemMenu(Result, False);
  Windows.DeleteMenu(SysMenu, SC_MAXIMIZE, MF_BYCOMMAND);
  Windows.DeleteMenu(SysMenu, SC_SIZE, MF_BYCOMMAND);
  Windows.DeleteMenu(SysMenu, SC_MOVE, MF_BYCOMMAND);
end;
{$ENDIF}

// 移动来自 MyLCL_Application.inc
//CLASSMETHOD:
procedure Application_Initialize(AObj: TApplication); extdecl;
begin
  handleExceptionBegin
  AObj.Initialize;
{$IFDEF WINDOWS}
  if Application.Icon.Handle = 0 then
     Application.Icon.Handle := LoadIcon(GetModuleHandle(nil), 'MAINICON');
  WidgetSet.ThemeServices.UpdateThemes;
  WidgetSet.AppHandle := CreateWindowsAppHandle;
{$ENDIF}
  handleExceptionEnd
end;

//CLASSMETHOD:
function Application_CreateForm(App: TApplication; AInitScale: LongBool): TForm; extdecl;
begin
  handleExceptionBegin
  App.CreateForm(TGoForm, Result);
  handleExceptionEnd
end;

procedure RemoveAllForms;
var
  C: TComponent;
  I: Integer;
begin
  for I := Application.ComponentCount - 1 downto 0 do
  begin
    C := Application.Components[I];
    if C is TCustomForm then
      C.Free;
  end;
end;

//CLASSMETHOD:
procedure Application_Run(AObj: TApplication); extdecl;
begin
  handleExceptionBegin
  AObj.Run;
  // 在Run结束后手动释放Application中的Form，主要是考虑在非Lazarus运行环境中造成的一些资源清理问题
  RemoveAllForms;
  handleExceptionEnd
end;

// TForm


//CLASSMETHOD:
function Form_Create2(AOwner: TComponent; AInitScale: LongBool): TGoForm; extdecl;
begin
  handleExceptionBegin
  Result :=  TGoForm.Create2(AOwner, AInitScale);
  handleExceptionEnd
end;

//EVENT_TYPE:TWndProcEvent
procedure Form_SetOnWndProc(AObj: TGoForm; AEventData: Pointer); extdecl;
begin
  handleExceptionBegin
  if AEventData = nil then
  begin
    TLCLMessageEvent.Remove(TMethod(AObj.OnWndProc));
    AObj.OnWndProc := nil;
    Exit;
  end;
  AObj.OnWndProc := TLCLMessageEvent.Create(AEventData).OnTWndProcEvent;
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure Form_SetGoPtr(AObj: TGoForm; APtr: Pointer); extdecl;
begin
  handleExceptionBegin
  AObj.GoPtr := APtr;
  handleExceptionEnd
end;

// mouse
function Mouse_Instance: TMouse; extdecl;
begin
  Result := Mouse;
end;

// screen
function Screen_Instance: TScreen; extdecl;
begin
  Result := Screen;
end;

function DTextToShortCut(AText: PChar): TShortCut; extdecl;
begin
  handleExceptionBegin
  Result := TextToShortCut(AText);
  handleExceptionEnd
end;

function DShortCutToText(AVal: TShortCut): PChar; extdecl;
begin
  handleExceptionBegin
  Result := PChar(ShortCutToText(AVal));
  handleExceptionEnd
end;

// TClipboard
function Clipboard_Instance: TClipboard; extdecl;
begin
  Result := Clipboard;
end;


//function CF_Text: TClipboardFormat;
//function CF_Bitmap: TClipboardFormat;
//function CF_Picture: TClipboardFormat;
//function CF_MetaFilePict: TClipboardFormat;
//function CF_Object: TClipboardFormat;
//function CF_Component: TClipboardFormat;
//function CF_HTML: TClipboardformat;

//CLASSMETHOD:
function Clipboard_HasFormat(AObj: TClipboard; AFormatID: TClipboardFormat): LongBool; extdecl;
const
  LCF_TEXT = 1;
  LCF_BITMAP = 2;
  LCF_METAFILEPICT = 3;
  LCF_OBJECT = 230;
  LCF_PICTURE = 700; // custom
  LCF_HTML = 701; // custom
  LCF_COMPONENT = 702; // custom
begin
  handleExceptionBegin
  case AFormatID of
    LCF_TEXT: AFormatID := Clipbrd.CF_Text;
    LCF_BITMAP: AFormatID := Clipbrd.CF_Bitmap;
    LCF_METAFILEPICT: AFormatID := Clipbrd.CF_MetaFilePict;
    LCF_OBJECT: AFormatID := Clipbrd.CF_Object;
    LCF_PICTURE: AFormatID := Clipbrd.CF_Picture;
    LCF_HTML: AFormatID := Clipbrd.CF_HTML;
    LCF_COMPONENT: AFormatID := Clipbrd.CF_Component;
  end;
  AObj.HasFormat(AFormatID);
  handleExceptionEnd
end;

//CLASSMETHOD:
function Clipboard_GetTextBuf(AObj: TClipboard; Buffer: PChar; BufSize: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.GetTextBuf(Buffer, BufSize);
  handleExceptionEnd
end;

function Clipboard_GetAsText(AObj: TClipboard): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  PChar(AObj.AsText);
  handleExceptionEnd
end;

procedure Clipboard_SetAsText(AObj: TClipboard; AValue: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.AsText := AValue;
  handleExceptionEnd
end;

//CLASSMETHOD:
function Clipboard_GetAsHtml(AObj: TClipboard; ExtractFragmentOnly: LongBool): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  PChar(AObj.GetAsHtml(ExtractFragmentOnly));
  handleExceptionEnd
end;

function DPredefinedClipboardFormat(AFormat: TPredefinedClipboardFormat): TClipboardFormat; extdecl;
begin
  Result := PredefinedClipboardFormat(AFormat);
end;

function DSetClipboard(ANewClipboard: TClipboard): TClipboard; extdecl;
begin
  handleExceptionBegin
  Result := SetClipboard(ANewClipboard);
  handleExceptionEnd
end;

// TMemoryStream

//CLASSMETHOD:
function MemoryStream_Write(AObj: TMemoryStream; Buffer: Pointer; Count: Longint): Longint; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Write(Buffer^, Count);
  handleExceptionEnd
end;

//CLASSMETHOD:
function MemoryStream_Read(AObj: TMemoryStream; Buffer: Pointer; Count: Longint): Longint; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Read(Buffer^, Count);
  handleExceptionEnd
end;

// TCanvas
// Canvas_BrushCopy
// Canvas_CopyRect
// Canvas_Draw1
// Canvas_Draw2
// Canvas_DrawFocusRect
// Canvas_FillRect
// Canvas_FrameRect
// Canvas_StretchDraw
// Canvas_TextRect1
// Canvas_TextRect2

//CLASSMETHOD:
//PARAMS:2=nonPtr,4=nonPtr
procedure Canvas_BrushCopy(AObj: TCanvas; var Dest: TRect; Bitmap: TBitmap; var Source: TRect; Color: TColor); extdecl;
begin
  handleExceptionBegin
  AObj.BrushCopy(Dest, Bitmap, Source, Color);
  handleExceptionEnd
end;

//CLASSMETHOD:
//PARAMS:2=nonPtr,4=nonPtr
procedure Canvas_CopyRect(AObj: TCanvas; var Dest: TRect; Canvas: TCanvas; var Source: TRect); extdecl;
begin
  handleExceptionBegin
  AObj.CopyRect(Dest, Canvas, Source);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure Canvas_Draw1(AObj: TCanvas; X, Y: Integer; Graphic: TGraphic); extdecl;
begin
  handleExceptionBegin
  AObj.Draw(X, Y, Graphic);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure Canvas_Draw2(AObj: TCanvas; X, Y: Integer; Graphic: TGraphic; Opacity: Byte); extdecl;
begin
  handleExceptionBegin
  AObj.Draw(X, Y, Graphic);
  handleExceptionEnd
end;

//CLASSMETHOD:
//PARAMS:2=nonPtr
procedure Canvas_DrawFocusRect(AObj: TCanvas; var ARect: TRect); extdecl;
begin
  handleExceptionBegin
  AObj.DrawFocusRect(ARect);
  handleExceptionEnd
end;

//CLASSMETHOD:
//PARAMS:2=nonPtr
procedure Canvas_FillRect(AObj: TCanvas; var Rect: TRect); extdecl;
begin
  handleExceptionBegin
  AObj.FillRect(Rect);
  handleExceptionEnd
end;

//CLASSMETHOD:
//PARAMS:2=nonPtr
procedure Canvas_FrameRect(AObj: TCanvas; var Rect: TRect); extdecl;
begin
  handleExceptionBegin
  AObj.FrameRect(Rect);
  handleExceptionEnd
end;

//CLASSMETHOD:
//PARAMS:2=nonPtr
procedure Canvas_TextRect1(AObj: TCanvas; var Rect: TRect; X, Y: Integer; const Text: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.TextRect(Rect, X, Y, Text);
  handleExceptionEnd
end;


type
// Note: tfComposited only supported by ThemeServices.DrawText
  TTextFormats = (tfBottom, tfCalcRect, tfCenter, tfEditControl, tfEndEllipsis,
    tfPathEllipsis, tfExpandTabs, tfExternalLeading, tfLeft, tfModifyString,
    tfNoClip, tfNoPrefix, tfRight, tfRtlReading, tfSingleLine, tfTop,
    tfVerticalCenter, tfWordBreak, tfHidePrefix, tfNoFullWidthCharBreak,
    tfPrefixOnly, tfTabStop, tfWordEllipsis, tfComposited);
  TTextFormat = set of TTextFormats;

(*

  TTextLayout = (tlTop, tlCenter, tlBottom);
  TTextStyle = packed record
    Alignment : TAlignment;  // TextRect Only: horizontal alignment
    Layout    : TTextLayout; // TextRect Only: vertical alignment
    SingleLine: boolean;     // If WordBreak is false then process #13, #10 as
    Clipping  : boolean;     // TextRect Only: Clip Text to passed Rectangle
    ExpandTabs: boolean;     // Replace #9 by apropriate amount of spaces (default is usually 8)
    ShowPrefix: boolean;     // TextRect Only: Process first single '&' per
    Wordbreak : boolean;     // TextRect Only: If line of text is too long
    Opaque    : boolean;     // TextRect: Fills background with current Brush
    SystemFont: Boolean;     // Use the system font instead of Canvas Font
    RightToLeft: Boolean;    //For RightToLeft text reading (Text Direction)
    EndEllipsis: Boolean;    // TextRect Only: If line of text is too long
  end;

  TAlignment = (taLeftJustify, taRightJustify, taCenter);

  TLeftRight = taLeftJustify..taRightJustify;

*)

//CLASSMETHOD:
function Canvas_TextRect2(AObj: TCanvas; var Rect: TRect; Text: PChar; TextFormat: TTextFormat): Integer; extdecl;
var
  LStyle: TTextStyle;
begin
  Result := 0;
  handleExceptionBegin
  LStyle := AObj.TextStyle;
  if TTextFormats.tfSingleLine in TextFormat then
    LStyle.SingleLine := True;
  if TTextFormats.tfTop in TextFormat then
    LStyle.Layout := TTextLayout.tlTop
  else if TTextFormats.tfVerticalCenter in TextFormat then
    LStyle.Layout := TTextLayout.tlCenter
  else if TTextFormats.tfBottom in TextFormat then
    LStyle.Layout := TTextLayout.tlBottom;
  if TTextFormats.tfNoClip in TextFormat then
    LStyle.Clipping := True;
  if TTextFormats.tfExpandTabs in TextFormat then
    LStyle.ExpandTabs:= True;
  if not(tfHidePrefix in TextFormat) and not(tfNoPrefix in TextFormat) then
    LStyle.ShowPrefix := True;
  if TTextFormats.tfWordBreak in TextFormat then
    LStyle.Wordbreak:= True;
  if tfEndEllipsis in TextFormat then
    LStyle.EndEllipsis:= True;
  if TTextFormats.tfLeft in TextFormat then
    LStyle.Alignment:= taLeftJustify
  else if TTextFormats.tfCenter in TextFormat then
    LStyle.Alignment:=taCenter
  else if TTextFormats.tfRight in TextFormat then
    LStyle.Alignment:= taRightJustify;
  AObj.TextRect(Rect, Rect.Left, Rect.Top, Text, LStyle);
  handleExceptionEnd
end;


//  Canvas.Polygon();
//  Canvas.Polyline();
//  canvas.PolyBezier();
//  Canvas.PolyBezierTo();

//CLASSMETHOD:
procedure Canvas_Polygon(AObj: TCanvas; APoints: PPoint; ALen: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Polygon(APoints, ALen);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure Canvas_Polyline(AObj: TCanvas; APoints: PPoint; ALen: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Polyline(APoints, ALen);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure Canvas_PolyBezier(AObj: TCanvas; APoints: PPoint; ALen: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.PolyBezier(APoints, ALen);
  handleExceptionEnd
end;


// TImageList
// ImageList_Draw1
// ImageList_Draw2
// ImageList_DrawOverlay1
// ImageList_DrawOverlay2
// ImageList_GetIcon1
// ImageList_GetIcon2

//CLASSMETHOD:
procedure ImageList_Draw1(AObj: TImageList; Canvas: TCanvas; X, Y, Index: Integer; Enabled: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.Draw(Canvas, X, Y, Index, Enabled);
  handleExceptionEnd
end;

//procedure ImageList_Draw2(AObj: TImageList; Canvas: TCanvas; X, Y, Index: Integer;
//  ADrawingStyle: TDrawingStyle; AImageType: TImageType;
//  Enabled: LongBool); extdecl;
//begin
//  AObj.Draw(Canvas, X, Y, Index, ADrawingStyle, AImageType, Enabled);
//end;

//CLASSMETHOD:
procedure ImageList_DrawOverlay1(AObj: TImageList; Canvas: TCanvas; X, Y: Integer; ImageIndex: Integer; Overlay: TOverlay; Enabled: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.DrawOverlay(Canvas, X, Y, ImageIndex, Overlay, Enabled);
  handleExceptionEnd
end;
  
//procedure ImageList_DrawOverlay2(AObj: TImageList; Canvas: TCanvas; X, Y: Integer;
//  ImageIndex: Integer; Overlay: TOverlay; ADrawingStyle: TDrawingStyle;
//  AImageType: TImageType; Enabled: LongBool); extdecl;
//begin
//  AObj.DrawOverlay(Canvas, X, Y, ImageIndex, Overlay, ADrawingStyle, AImageType, Enabled);
//end;

//CLASSMETHOD:
procedure ImageList_GetIcon1(AObj: TImageList; Index: Integer; Image: TIcon); extdecl;
begin
  handleExceptionBegin
  AObj.GetIcon(Index, Image);
  handleExceptionEnd
end;

//procedure ImageList_GetIcon2(AObj: TImageList; Index: Integer; Image: TIcon; ADrawingStyle: TDrawingStyle; AImageType: TImageType); extdecl;
//begin
// // AObj.GetIcon(Index, Image, ADrawingStyle, AImageType);
//end;


// TMeuItem

function MenuItem_GetShortCutText(AObj: TMenuItem): PChar; extdecl;
begin
  handleExceptionBegin
  Result := PChar(ShortCutToText(AObj.ShortCut));
  handleExceptionEnd
end;

procedure MenuItem_SetShortCutText(AObj: TMenuItem; Value: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.ShortCut := TextToShortCut(Value);
  handleExceptionEnd
end;

// win api
//{$IFNDEF WINDOWS}
function DSendMessage(hWd: HWND; msg: Cardinal; wParam: WParam; lParam: LParam): LResult; extdecl;
begin
  handleExceptionBegin
  Result := LCLIntf.SendMessage(hWd, msg, wParam, lParam);
  handleExceptionEnd
end;

function DPostMessage(hWd: HWND; msg: Cardinal; wParam: WParam; lParam: LParam): Boolean; extdecl;
begin
  handleExceptionBegin
  Result := LCLIntf.PostMessage(hWd, msg, wParam, lParam);
  handleExceptionEnd
end;

function DIsIconic(hWnd: HWND): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := LCLIntf.IsIconic(hWnd);
  handleExceptionEnd
end;

function DIsWindow(hWnd: HWND): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := LCLIntf.IsWindow(hWnd);
  handleExceptionEnd
end;

function DIsZoomed(hWnd: HWND): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := LCLIntf.IsZoomed(hWnd);
  handleExceptionEnd
end;

function DIsWindowVisible(hWnd: HWND): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := LCLIntf.IsWindowVisible(hWnd);
  handleExceptionEnd
end;

function DGetDC(hWnd: HWND): HDC; extdecl;
begin
  handleExceptionBegin
  Result := LCLIntf.GetDC(hWnd);
  handleExceptionEnd
end;

function DReleaseDC(hWnd: HWND; dc: HDC): Integer; extdecl;
begin
  handleExceptionBegin
  Result := LCLIntf.ReleaseDC(hWnd, dc);
  handleExceptionEnd
end;

function DSetForegroundWindow(hWnd: HWND): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := LCLIntf.SetForegroundWindow(hWnd);
  handleExceptionEnd
end;

function DRegisterClipboardFormat(AFormat: PChar): TClipboardFormat; extdecl;
begin
  handleExceptionBegin
  Result := Clipbrd.RegisterClipboardFormat(AFormat);
  handleExceptionEnd
end;

//PARAMS:1=nonPtr
function DWindowFromPoint(point: PPoint): HWND; extdecl;
begin
  if point = nil then
    Exit(0);
  handleExceptionBegin
  Result := LCLIntf.WindowFromPoint(PPoint(point)^);
  handleExceptionEnd
end;
//{$ENDIF}


// Other

procedure SetEventCallback(APtr: Pointer); extdecl;
begin
  GEventCallbackPtr := TEventCallbackPtr(APtr);
end;

procedure SetMessageCallback(APtr: Pointer); extdecl;
begin
  GMessageCallbackPtr := TMessageCallbackPtr(APtr);
end;

procedure SetThreadSyncCallback(APtr: Pointer); extdecl;
begin
  GThreadSyncCallbackPtr := APtr;
end;

procedure SetExceptionHandlerCallback(APtr: Pointer); extdecl;
begin
  GExceptionHandlerCallbackPtr := APtr;
end;

procedure SetRequestCallCreateParamsCallback(APtr: Pointer); extdecl;
begin
  GRequestCallCreateParamsPtr := APtr;
end;

procedure SetRemoveEventCallback(APtr: Pointer); extdecl;
begin
  GRemoveEventCallbackPtr := APtr;
end;

// 从string数组中获取成员
function DGetStringArrOf(P: Pointer; AIndex: NativeInt): PChar; extdecl;
begin
  handleExceptionBegin
  Result := PChar(PString(PByte(P) + AIndex * SizeOf(string))^);
  handleExceptionEnd
end;

function DStrLen(p: PChar): NativeInt; extdecl;
begin
  handleExceptionBegin
  Result := Length(p); //UTF8Length(); UTF8LengthFast
  handleExceptionEnd
end;

procedure DMove(Src, Dest: Pointer; Len: NativeInt); extdecl;
begin
  handleExceptionBegin
  Move(Src^, Dest^, Len);
  handleExceptionEnd
end;

procedure DShowMessage(AMsg: PChar); extdecl;
begin
  handleExceptionBegin
  ShowMessage(AMsg);
  handleExceptionEnd
end;

function DGetMainInstance: HINST; extdecl;
begin
{$IFDEF WINDOWS}
  Result := GetModuleHandle(nil);
{$ELSE}
  Result := 0;
{$ENDIF}
end;

function DMessageDlg(const Msg: PChar; DlgType: TMsgDlgType; Buttons: TMsgDlgButtons; HelpCtx: Longint): Integer; extdecl;
begin
  handleExceptionBegin
  Result := MessageDlg(Msg, DlgType, Buttons, HelpCtx);
  handleExceptionEnd
end;

// 在主线程中运行
procedure DSynchronize(AUseMsg: LongBool); extdecl;
begin
  handleExceptionBegin
  if MainThreadId = TThread.CurrentThread.ThreadID then
    TLCLEvent.ThreadProc()
  else
    TThread.Synchronize(nil, TLCLEvent.ThreadProc);
  handleExceptionEnd
end;

function DMainThreadId: TThreadID; extdecl;
begin
  Result := MainThreadId;
end;

function DCurrentThreadId: TThreadID; extdecl;
begin
  handleExceptionBegin
  Result := TThread.CurrentThread.ThreadID;
  handleExceptionEnd
end;

procedure DSysOpen(FileName: PChar); extdecl;
begin
  OpenURL(FileName);
end;

function DExtractFilePath(AFileName: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  Result := PChar(ExtractFilePath(AFileName));
  handleExceptionEnd
end;

function DFileExists(AFileName: PChar): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := FileExists(AFileName);
  handleExceptionEnd
end;

function DSelectDirectory1(var Directory: PChar; Options: TSelectDirOpts; HelpCtx: Longint): LongBool; extdecl;
var
  LDir: string;
begin
  handleExceptionBegin
  Result := SelectDirectory(LDir, Options, HelpCtx);
  if Result then
    Directory := PChar(LDir);
  handleExceptionEnd
end;

function DSelectDirectory2(Caption, Root: PChar; AShowHidden: LongBool; var Directory: PChar): LongBool;  extdecl;
var
  LDir: string;
begin
  handleExceptionBegin
  Result := SelectDirectory(Caption, Root, LDir, AShowHidden, 0);
  if Result then
    Directory := PChar(LDir);
  handleExceptionEnd
end;

function DInputBox(ACaption, APrompt, ADefault: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  Result := PChar(InputBox(ACaption, APrompt, ADefault));
  handleExceptionEnd
end;

function DInputQuery(ACaption, APrompt: PChar; Value: PChar; out AOut: PChar): LongBool; extdecl;
var
  S: string;
begin
  handleExceptionBegin
  S := Value;
  Result := InputQuery(string(ACaption), string(APrompt), S);
  if Result then
    AOut := PChar(S);
  handleExceptionEnd
end;


function DPasswordBox(const ACaption, APrompt : PChar): PChar; extdecl;
begin
  handleExceptionBegin
  Result := PChar(PasswordBox(ACaption, APrompt));
  handleExceptionEnd
end;

function DInputCombo(const ACaption, APrompt: PChar; const AList: TStrings): Integer; extdecl;
begin
  handleExceptionBegin
  Result := InputCombo(ACaption, APrompt, AList);
  handleExceptionEnd
end;

function DInputComboEx(const ACaption, APrompt: PChar; const AList: TStrings; AllowCustomText: LongBool): PChar; extdecl;
begin
  handleExceptionBegin
  Result := PChar(InputComboEx(ACaption, APrompt, AList, AllowCustomText));
  handleExceptionEnd
end;


{$IFDEF WINDOWS}
// 路径合并
function PathCombine(A1, A2: string): string; inline;
begin
  if A1[Length(A1)] <> PathDelim then
    A1 := A1 + PathDelim;
  if (Length(A2) > 0) and (A2[1] = PathDelim) then
    Delete(A2, 1, 1);
  Result := A1 + A2;
end;

// 创建URL快捷方式
procedure DCreateURLShortCut(ADestPath, AShortCutName, AURL: PChar); extdecl;
var
  Ini: TIniFile;
begin
  handleExceptionBegin
  Ini := TIniFile.Create(PathCombine(ADestPath, AShortCutName) + '.url');
  try
    Ini.WriteString('{000214A0-0000-0000-C000-000000000046}', 'Prop3', '19,2');
    Ini.WriteString('InternetShortcut', 'URL', AURL);
  finally
    Ini.Free;
  end;
  handleExceptionEnd
end;

// 创建快捷方式
function DCreateShortCut(ADestPath, AShortCutName, ASrcFileName, AIconFileName, ADescription, ACmdArgs: PChar): LongBool; extdecl;
var
  LObject : IUnknown;
  LPLink : IShellLink;
  LPPFile : IPersistFile;
  LinkFilename : WideString;
begin
  handleExceptionBegin
  CoInitializeEx(nil, 0);
  try
    LObject := CreateComObject(CLSID_ShellLink);
    LPLink := LObject as IShellLink;
    LPPFile := LObject as IPersistFile;
    LPLink.SetPath(ASrcFileName);
    LPLink.SetWorkingDirectory(PChar(ExtractFilePath(ASrcFileName)));
    LPLink.SetDescription(ADescription);
    if AIconFileName = '' then
      LPLink.SetIconLocation(ASrcFileName, 0)
    else LPLink.SetIconLocation(AIconFileName, 0);
    LPLink.SetArguments(ACmdArgs);
    LinkFilename := WideString(PathCombine(ADestPath, AShortCutName) + '.lnk');
    Result := LPPFile.Save(PWideChar(LinkFilename), FALSE) = S_OK;
  finally
    CoUninitialize;
  end;
  handleExceptionEnd
end;

{$ENDIF}


// 属性设置，这里主要提供给多语言使用
procedure DSetPropertyValue(Instance: TObject; PropName, Value: PChar); extdecl;
var
  LPropInfo: PPropInfo;
begin
  handleExceptionBegin
  LPropInfo := GetPropInfo(Instance, PropName);
  if LPropInfo <> nil then
  begin
    case LPropInfo^.PropType^.Kind of
      tkInteger, tkInt64:
        SetInt64Prop(Instance, LPropInfo, StrToIntDef(Value, -1));
      tkChar, tkSString, tkLString, tkAString, tkWString, tkWChar, tkUString,tkUChar:
        SetStrProp(Instance, LPropInfo, Value);
    end;
  end;
  handleExceptionEnd
end;

procedure DSetPropertySecValue(Instance: TObject; PropName, SecPropName, Value: PChar); extdecl;
//type
  //TCallIndexGetClassProc = function(AData: Pointer; AIndex: Integer): Pointer;
var
  LPropInfo: PPropInfo;
  LObj: TObject;
  LPropName: string;
  LP, LIndex: Integer;
begin
  handleExceptionBegin
  LPropName := PropName;
  LIndex := -1;
  LP := LPropName.IndexOf('[');
  if LP > 0 then
  begin
    LIndex := StrToIntDef(LPropName.Substring(LP + 1, LPropName.IndexOf(']') - LP - 1), -1);
    LPropName := LPropName.Substring(0, LP);
  end;
  LPropInfo := GetPropInfo(Instance, LPropName);
  if LPropInfo <> nil then
  begin
    LObj := GetObjectProp(Instance, LPropInfo);
    if LObj <> nil then
    begin
      if LIndex <> -1 then
      begin
        if LPropInfo^.PropType^.Kind = tkClass then
        begin
          if LObj is TListColumns then
          begin
            if (LIndex >= 0) and (LIndex < TListColumns(LObj).Count) and string(SecPropName).Equals('Caption') then
              TListColumns(LObj)[LIndex].Caption := Value;
          end else
          if LObj is TStrings then
          begin
            if (LIndex >= 0) and (LIndex < TStrings(LObj).Count) and (string(SecPropName).Equals('String') or string(SecPropName).IsEmpty) then
              TStrings(LObj)[LIndex] := Value;
          end;
        end;
      end else
        DSetPropertyValue(LObj, SecPropName, Value);
    end;
  end;
  handleExceptionEnd
end;


//PARAMS:1=nonPtr
function DGUIDToString(var AGUID: TGUID): PChar; extdecl;
begin
  handleExceptionBegin
  Result := PChar(GUIDToString(AGUID));
  handleExceptionEnd
end;

//RETURNISLASTPARAM:
procedure DStringToGUID(AGUIDStr: PChar; out AGUID: TGUID); extdecl;
begin
  handleExceptionBegin
  AGUID := StringToGUID(AGUIDStr);
  handleExceptionEnd
end;

//RETURNISLASTPARAM:
procedure DCreateGUID(out AGUID: TGUID); extdecl;
begin
  handleExceptionBegin
  CreateGUID(AGUID);
  handleExceptionEnd
end;

// Printer
function Printer_Instance: TPrinter; extdecl;
begin
  Result := Printer;
end;

//CLASSMETHOD:
procedure Printer_SetPrinter(Obj: TPrinter; aName: PChar); extdecl;
begin
  handleExceptionBegin
  Obj.SetPrinter(aName);
  handleExceptionEnd
end;

function DLibAbout: PChar; extdecl;
var
  LVal: string;
begin
  LVal := 'Author:不在乎y(ying32)'#13#10 +
          'Official website: https://z-kit.cc'#13#10 +
          'github: https://github.com/ying32'#13#10 +
          'Based on Lazarus ' + lcl_version + #13#10 +
          'Third party library list:'#13#10;
  LVal := LVal + '    TRichMemo'#13#10;
  LVal := LVal + '    TATGauge';
  Result := PChar(LVal);
end;

//----------------------------------------------------
// 一些lib的资源
type
  TResItem = record
    Name: PChar;
    ValuePtr: Pointer;
  end;

const
  GLibResouces: array[0..40] of TResItem = (
     // 27
    (Name: 'SOpenFileTitle'; ValuePtr: @rsmbOpen),
    (Name: 'SOKButton'; ValuePtr: @rsMbOK),
    (Name: 'SCancelButton'; ValuePtr: @rsMbCancel),
    (Name: 'SYesButton'; ValuePtr: @rsMbYes),
    (Name: 'SNoButton'; ValuePtr: @rsMbNo),
    (Name: 'SHelpButton'; ValuePtr: @rsMbHelp),
    (Name: 'SCloseButton'; ValuePtr: @rsMbClose),
    (Name: 'SIgnoreButton'; ValuePtr: @rsMbIgnore),
    (Name: 'SRetryButton'; ValuePtr: @rsMbRetry),
    (Name: 'SAbortButton'; ValuePtr: @rsMbAbort),
    (Name: 'SAllButton'; ValuePtr: @rsMbAll),
    (Name: 'SMsgDlgWarning'; ValuePtr: @rsMtWarning),
    (Name: 'SMsgDlgError'; ValuePtr: @rsMtError),
    (Name: 'SMsgDlgInformation'; ValuePtr: @rsMtInformation),
    (Name: 'SMsgDlgConfirm'; ValuePtr: @rsMtConfirmation),
    (Name: 'SMsgDlgYes'; ValuePtr: @rsMbYes),
    (Name: 'SMsgDlgNo'; ValuePtr: @rsMbNo),
    (Name: 'SMsgDlgOK'; ValuePtr: @rsMbOK),
    (Name: 'SMsgDlgCancel'; ValuePtr: @rsMbCancel),
    (Name: 'SMsgDlgHelp'; ValuePtr: @rsMbHelp),
    (Name: 'SMsgDlgAbort'; ValuePtr: @rsMbAbort),
    (Name: 'SMsgDlgRetry'; ValuePtr: @rsMbRetry),
    (Name: 'SMsgDlgIgnore'; ValuePtr: @rsMbIgnore),
    (Name: 'SMsgDlgAll'; ValuePtr: @rsMbAll),
    (Name: 'SMsgDlgNoToAll'; ValuePtr: @rsMbNoToAll),
    (Name: 'SMsgDlgYesToAll'; ValuePtr: @rsMbYesToAll),
    (Name: 'SMsgDlgClose'; ValuePtr: @rsMbClose),

     // TFindDialog And TReplaceDialog
     // 9
    (Name: 'rsFind'; ValuePtr: @rsFind),
    (Name: 'rsHelp'; ValuePtr: @rsHelp),
    (Name: 'rsWholeWordsOnly'; ValuePtr: @rsWholeWordsOnly),
    (Name: 'rsCaseSensitive'; ValuePtr: @rsCaseSensitive),
    (Name: 'rsEntireScope'; ValuePtr: @rsEntireScope),
    (Name: 'rsText'; ValuePtr: @rsText),
    (Name: 'rsDirection'; ValuePtr: @rsDirection),
    (Name: 'rsForward'; ValuePtr: @rsForward),
    (Name: 'rsBackward'; ValuePtr: @rsBackward),

    (Name: 'rsFindMore'; ValuePtr: @rsFindMore),
    (Name: 'rsReplace'; ValuePtr: @rsReplace),
    (Name: 'rsReplaceAll'; ValuePtr: @rsReplaceAll),

    (Name: 'rsSelectcolorTitle'; ValuePtr: @rsSelectcolorTitle),
    (Name: 'rsSelectFontTitle'; ValuePtr: @rsSelectFontTitle)

  );

function DGetLibResourceCount: Integer; extdecl;
begin
  Result := Length(GLibResouces);
end;

//RETURNISLASTPARAM:
procedure DGetLibResourceItem(AIndex: Integer; out AResult: TResItem); extdecl;
begin
  handleExceptionBegin
  if (AIndex >= 0)  and (AIndex < Length(GLibResouces)) then
    AResult := GLibResouces[AIndex];
  handleExceptionEnd
end;

// 说不好有没有内存泄露，啊，先这样呗
procedure DModifyLibResource(APtr: Pointer; AValue: PChar); extdecl;
begin
  handleExceptionBegin
  if APtr <> nil then
    PResStringRec(APtr)^ := string(AValue);
  handleExceptionEnd
end;


type TLibType = (ltVCL, ltLCL);

function DGetLibType: TLibType; extdecl;
begin
  Result := ltLCL;
end;


//procedure DSetDefaultLang(ALang: PChar; ADir: PChar; AForceUpdate: LongBool);
//begin
//  SetDefaultLang(ALang, ADir, AForceUpdate);
//end;
//
//function DGetDefaultLang: PChar;
//begin
//  Result := ToPChar(GetDefaultLang);
//end;

{$ifndef UsehandleException}
// dylib
type
  TSyscall0  = function: UInt64; extdecl;
  TSyscall1  = function(A1: Pointer): UInt64; extdecl;
  TSyscall2  = function(A1, A2: Pointer): UInt64; extdecl;
  TSyscall3  = function(A1, A2, A3: Pointer): UInt64; extdecl;
  TSyscall4  = function(A1, A2, A3, A4: Pointer): UInt64; extdecl;
  TSyscall5  = function(A1, A2, A3, A4, A5: Pointer): UInt64; extdecl;
  TSyscall6  = function(A1, A2, A3, A4, A5, A6: Pointer): UInt64; extdecl;
  TSyscall7  = function(A1, A2, A3, A4, A5, A6, A7: Pointer): UInt64; extdecl;
  TSyscall8  = function(A1, A2, A3, A4, A5, A6, A7, A8: Pointer): UInt64; extdecl;
  TSyscall9  = function(A1, A2, A3, A4, A5, A6, A7, A8, A9: Pointer): UInt64; extdecl;
  TSyscall10 = function(A1, A2, A3, A4, A5, A6, A7, A8, A9, A10: Pointer): UInt64; extdecl;
  TSyscall11 = function(A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11: Pointer): UInt64; extdecl;
  TSyscall12 = function(A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12: Pointer): UInt64; extdecl;

function MySyscall(AProc:Pointer; ALen: NativeInt; A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12: Pointer): UInt64; extdecl;
begin
  Result := 0;
  if AProc = nil then Exit;
  try
    case ALen of
      0 : Result := TSyscall0(AProc)();
      1 : Result := TSyscall1(AProc) (A1);
      2 : Result := TSyscall2(AProc) (A1, A2);
      3 : Result := TSyscall3(AProc) (A1, A2, A3);
      4 : Result := TSyscall4(AProc) (A1, A2, A3, A4);
      5 : Result := TSyscall5(AProc) (A1, A2, A3, A4, A5);
      6 : Result := TSyscall6(AProc) (A1, A2, A3, A4, A5, A6);
      7 : Result := TSyscall7(AProc) (A1, A2, A3, A4, A5, A6, A7);
      8 : Result := TSyscall8(AProc) (A1, A2, A3, A4, A5, A6, A7, A8);
      9 : Result := TSyscall9(AProc) (A1, A2, A3, A4, A5, A6, A7, A8, A9);
      10: Result := TSyscall10(AProc)(A1, A2, A3, A4, A5, A6, A7, A8, A9, A10);
      11: Result := TSyscall11(AProc)(A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11);
      12: Result := TSyscall12(AProc)(A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12);
    else
      Exit;
    end;
  except
    on E: Exception do
      CallException(E);
  end;
end;
{$endif}


// 用于go编译成dll时使用
procedure DInitGoDll(AMainThreadId: TThreadID); extdecl;
begin
  handleExceptionBegin
  // 因为go编译为dll后，这个值不一定是主线程id了，所以得重新初始
  if MainThreadId <> AMainThreadId then
  begin
    if AMainThreadId <= TThreadID(0) then
      AMainThreadId := TThread.CurrentThread.ThreadID;
    MainThreadId := AMainThreadId;
  end;
  // 初始下app
  Application.MainFormOnTaskBar:=True;
  Application.Initialize;
{$ifdef windows}
  WidgetSet.ThemeServices.UpdateThemes;
  // 设置App句柄
  WidgetSet.AppHandle := CreateWindowsAppHandle;
{$endif}
  handleExceptionEnd
end;

function DFindControl(AHandle: HWND): TWinControl; extdecl;
begin
  Result := FindControl(AHandle);
end;

//PARAMS:1=nonPtr
function DFindLCLControl(var AScreenPos: TPoint): TControl; extdecl;
begin
  Result := FindLCLControl(AScreenPos);
end;

function DFindOwnerControl(Handle: HWND): TWinControl; extdecl;
begin
  Result := FindOwnerControl(Handle);
end;

//PARAMS:1=nonPtr
function DFindControlAtPosition(var APosition: TPoint; AllowDisabled: LongBool): TControl; extdecl;
begin
  Result := FindControlAtPosition(APosition, AllowDisabled);
end;

//PARAMS:1=nonPtr
function DFindLCLWindow(var AScreenPos: TPoint; AllowDisabled: LongBool): TWinControl; extdecl;
begin
  Result := FindLCLWindow(AScreenPos, AllowDisabled);
end;

//PARAMS:1=nonPtr
function DFindDragTarget(var APosition: TPoint; AllowDisabled: LongBool): TControl; extdecl;
begin
  Result := FindDragTarget(APosition, AllowDisabled);
end;


exports
  // 导出动态调用的
{$ifndef UsehandleException}
  MySyscall,
{$endif}

  // SysLocaled
  DSysLocale,

  AddLazarusResources,
  AddLazarusResources2,

  // 库的信息
  DLibStringEncoding,
  DLibVersion,

  // TApplication
  Application_Instance,
  Application_CreateForm,
  Application_Run,
  Application_Initialize,

  // TForm
  Form_Create2,
  Form_SetOnWndProc,
  Form_SetGoPtr,

  // TMouse
  Mouse_Instance,
  Screen_Instance,

//{$IFNDEF WINDOWS}
  DSendMessage,
  DPostMessage,
  DIsIconic,
  DIsWindow,
  DIsZoomed,
  DIsWindowVisible,
  DGetDC,
  DReleaseDC,
  DSetForegroundWindow,
  DRegisterClipboardFormat,
  DWindowFromPoint,
//{$ENDIF}

{$IFDEF LINUX}
  GdkWindow_GetXId,
  GtkWidget_GetGtkFixed,
  GdkWindow_FromForm,
  GtkWidget_Window,
{$ENDIF}

{$IFDEF LCLCocoa}
  NSWindow_FromForm,
  NSWindow_titleVisibility,
  NSWindow_setTitleVisibility,
  NSWindow_titlebarAppearsTransparent,
  NSWindow_setTitlebarAppearsTransparent,
  NSWindow_styleMask,
  NSWindow_setStyleMask,
  NSWindow_setRepresentedURL,
  NSWindow_release,
{$ENDIF}

  // Other
  SetEventCallback,
  SetMessageCallback,
  SetThreadSyncCallback,
  SetExceptionHandlerCallback,
  SetRequestCallCreateParamsCallback,
  SetRemoveEventCallback,

  //DSetDefaultLang,
  //DGetDefaultLang,

  DGetStringArrOf,
  DStrLen,
  DMove,

  DShowMessage,
  DGetMainInstance,
  DSynchronize,
  DSysOpen,
  DTextToShortCut,
  DShortCutToText,
  DMessageDlg,
  DExtractFilePath,
  DFileExists,
  DMainThreadId,
  DCurrentThreadId,

  DSelectDirectory1,
  DSelectDirectory2,
  DInputBox,
  DInputQuery,
  DPasswordBox,
  DInputCombo,
  DInputComboEx,

{$IFDEF WINDOWS}
  // ShortCut
  DCreateURLShortCut,
  DCreateShortCut,
{$ENDIF}

  // SetProperty
  DSetPropertyValue,
  DSetPropertySecValue,

  // TMemoryStream
  MemoryStream_Write,
  MemoryStream_Read,

  // TClipboard
  Clipboard_Instance,
  Clipboard_HasFormat,
  Clipboard_GetTextBuf,
  Clipboard_GetAsText,
  Clipboard_SetAsText,
  Clipboard_GetAsHtml,
  DPredefinedClipboardFormat,
  DSetClipboard,


  // TCanavs
  Canvas_BrushCopy,
  Canvas_CopyRect,
  Canvas_Draw1,
  Canvas_Draw2,
  Canvas_DrawFocusRect,
  Canvas_FillRect,
  Canvas_FrameRect,
  Canvas_TextRect1,
  Canvas_TextRect2,
  Canvas_Polygon,
  Canvas_Polyline,
  Canvas_PolyBezier,

  // TImageList
  ImageList_Draw1,
  //ImageList_Draw2,
  ImageList_DrawOverlay1,
  //ImageList_DrawOverlay2,
  ImageList_GetIcon1,
  //ImageList_GetIcon2,

  // TMenuItem
  MenuItem_GetShortCutText,
  MenuItem_SetShortCutText,

  ResFormLoadFromStream,
  ResFormLoadFromFile,
  ResFormLoadFromResourceName,
  ResFormRegisterFormResource,
  ResFormLoadFromClassName,


  // TGUID
  DGUIDToString,
  DStringToGUID,
  DCreateGUID,

  // Printer
  Printer_Instance,
  Printer_SetPrinter,

  // libResources
  DGetLibResourceCount,
  DGetLibResourceItem,
  DModifyLibResource,
  DLibAbout,

  DGetLibType,

  DInitGoDll,

  DFindControl,
  DFindLCLControl,
  DFindOwnerControl,
  DFindControlAtPosition,
  DFindLCLWindow,
  DFindDragTarget
;
