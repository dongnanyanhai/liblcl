
//----------------------------------------
// The code is automatically generated by the GenlibLcl tool.
// Copyright © ying32. All Rights Reserved.
// 
// Licensed under Lazarus.modifiedLGPL
//
//----------------------------------------

function SavePictureDialog_Create(AOwner: TComponent): TSavePictureDialog; extdecl;
begin
  handleExceptionBegin
  Result :=  TSavePictureDialog.Create(AOwner);
  handleExceptionEnd
end;

procedure SavePictureDialog_Free(AObj: TSavePictureDialog); extdecl;
begin
  handleExceptionBegin
  AObj.Free;
  handleExceptionEnd
end;

//CLASSMETHOD:
function SavePictureDialog_Execute(AObj: TSavePictureDialog): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Execute;
  handleExceptionEnd
end;

//CLASSMETHOD:
function SavePictureDialog_FindComponent(AObj: TSavePictureDialog; AName: PChar): TComponent; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.FindComponent(AName);
  handleExceptionEnd
end;

//CLASSMETHOD:
function SavePictureDialog_GetNamePath(AObj: TSavePictureDialog): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  PChar(AObj.GetNamePath);
  handleExceptionEnd
end;

//CLASSMETHOD:
function SavePictureDialog_HasParent(AObj: TSavePictureDialog): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.HasParent;
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure SavePictureDialog_Assign(AObj: TSavePictureDialog; Source: TPersistent); extdecl;
begin
  handleExceptionBegin
  AObj.Assign(Source);
  handleExceptionEnd
end;

//CLASSMETHOD:
function SavePictureDialog_ClassType(AObj: TSavePictureDialog): TClass; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ClassType;
  handleExceptionEnd
end;

//CLASSMETHOD:
function SavePictureDialog_ClassName(AObj: TSavePictureDialog): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  ToPChar(AObj.ClassName);
  handleExceptionEnd
end;

//CLASSMETHOD:
function SavePictureDialog_InstanceSize(AObj: TSavePictureDialog): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.InstanceSize;
  handleExceptionEnd
end;

//CLASSMETHOD:
function SavePictureDialog_InheritsFrom(AObj: TSavePictureDialog; AClass: TClass): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.InheritsFrom(AClass);
  handleExceptionEnd
end;

//CLASSMETHOD:
function SavePictureDialog_Equals(AObj: TSavePictureDialog; Obj: TObject): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Equals(Obj);
  handleExceptionEnd
end;

//CLASSMETHOD:
function SavePictureDialog_GetHashCode(AObj: TSavePictureDialog): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.GetHashCode;
  handleExceptionEnd
end;

//CLASSMETHOD:
function SavePictureDialog_ToString(AObj: TSavePictureDialog): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  PChar(AObj.ToString);
  handleExceptionEnd
end;

function SavePictureDialog_GetFilter(AObj: TSavePictureDialog): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  PChar(AObj.Filter);
  handleExceptionEnd
end;

procedure SavePictureDialog_SetFilter(AObj: TSavePictureDialog; AValue: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.Filter := AValue;
  handleExceptionEnd
end;

function SavePictureDialog_GetFiles(AObj: TSavePictureDialog): TStrings; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Files;
  handleExceptionEnd
end;

function SavePictureDialog_GetDefaultExt(AObj: TSavePictureDialog): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  PChar(AObj.DefaultExt);
  handleExceptionEnd
end;

procedure SavePictureDialog_SetDefaultExt(AObj: TSavePictureDialog; AValue: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.DefaultExt := AValue;
  handleExceptionEnd
end;

function SavePictureDialog_GetFileName(AObj: TSavePictureDialog): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  PChar(AObj.FileName);
  handleExceptionEnd
end;

procedure SavePictureDialog_SetFileName(AObj: TSavePictureDialog; AValue: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.FileName := AValue;
  handleExceptionEnd
end;

function SavePictureDialog_GetFilterIndex(AObj: TSavePictureDialog): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.FilterIndex;
  handleExceptionEnd
end;

procedure SavePictureDialog_SetFilterIndex(AObj: TSavePictureDialog; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.FilterIndex := AValue;
  handleExceptionEnd
end;

function SavePictureDialog_GetInitialDir(AObj: TSavePictureDialog): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  PChar(AObj.InitialDir);
  handleExceptionEnd
end;

procedure SavePictureDialog_SetInitialDir(AObj: TSavePictureDialog; AValue: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.InitialDir := AValue;
  handleExceptionEnd
end;

function SavePictureDialog_GetOptions(AObj: TSavePictureDialog): TOpenOptions; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Options;
  handleExceptionEnd
end;

procedure SavePictureDialog_SetOptions(AObj: TSavePictureDialog; AValue: TOpenOptions); extdecl;
begin
  handleExceptionBegin
  AObj.Options := AValue;
  handleExceptionEnd
end;

function SavePictureDialog_GetTitle(AObj: TSavePictureDialog): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  PChar(AObj.Title);
  handleExceptionEnd
end;

procedure SavePictureDialog_SetTitle(AObj: TSavePictureDialog; AValue: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.Title := AValue;
  handleExceptionEnd
end;

function SavePictureDialog_GetHandle(AObj: TSavePictureDialog): HWND; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Handle;
  handleExceptionEnd
end;

//EVENT_TYPE:TNotifyEvent
procedure SavePictureDialog_SetOnClose(AObj: TSavePictureDialog; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnClose}
  EventMethodCode
end;

//EVENT_TYPE:TNotifyEvent
procedure SavePictureDialog_SetOnShow(AObj: TSavePictureDialog; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnShow}
  EventMethodCode
end;

function SavePictureDialog_GetComponentCount(AObj: TSavePictureDialog): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ComponentCount;
  handleExceptionEnd
end;

function SavePictureDialog_GetComponentIndex(AObj: TSavePictureDialog): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ComponentIndex;
  handleExceptionEnd
end;

procedure SavePictureDialog_SetComponentIndex(AObj: TSavePictureDialog; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.ComponentIndex := AValue;
  handleExceptionEnd
end;

function SavePictureDialog_GetOwner(AObj: TSavePictureDialog): TComponent; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Owner;
  handleExceptionEnd
end;

function SavePictureDialog_GetName(AObj: TSavePictureDialog): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  PChar(AObj.Name);
  handleExceptionEnd
end;

procedure SavePictureDialog_SetName(AObj: TSavePictureDialog; AValue: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.Name := AValue;
  handleExceptionEnd
end;

function SavePictureDialog_GetTag(AObj: TSavePictureDialog): NativeInt; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Tag;
  handleExceptionEnd
end;

procedure SavePictureDialog_SetTag(AObj: TSavePictureDialog; AValue: NativeInt); extdecl;
begin
  handleExceptionBegin
  AObj.Tag := AValue;
  handleExceptionEnd
end;

function SavePictureDialog_GetComponents(AObj: TSavePictureDialog; AIndex: Integer): TComponent; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Components[AIndex];
  handleExceptionEnd
end;

function SavePictureDialog_StaticClassType: TClass; extdecl;
begin
  Result := TSavePictureDialog;
end;

exports
  SavePictureDialog_Create,
  SavePictureDialog_Free,
  SavePictureDialog_Execute,
  SavePictureDialog_FindComponent,
  SavePictureDialog_GetNamePath,
  SavePictureDialog_HasParent,
  SavePictureDialog_Assign,
  SavePictureDialog_ClassType,
  SavePictureDialog_ClassName,
  SavePictureDialog_InstanceSize,
  SavePictureDialog_InheritsFrom,
  SavePictureDialog_Equals,
  SavePictureDialog_GetHashCode,
  SavePictureDialog_ToString,
  SavePictureDialog_GetFilter,
  SavePictureDialog_SetFilter,
  SavePictureDialog_GetFiles,
  SavePictureDialog_GetDefaultExt,
  SavePictureDialog_SetDefaultExt,
  SavePictureDialog_GetFileName,
  SavePictureDialog_SetFileName,
  SavePictureDialog_GetFilterIndex,
  SavePictureDialog_SetFilterIndex,
  SavePictureDialog_GetInitialDir,
  SavePictureDialog_SetInitialDir,
  SavePictureDialog_GetOptions,
  SavePictureDialog_SetOptions,
  SavePictureDialog_GetTitle,
  SavePictureDialog_SetTitle,
  SavePictureDialog_GetHandle,
  SavePictureDialog_SetOnClose,
  SavePictureDialog_SetOnShow,
  SavePictureDialog_GetComponentCount,
  SavePictureDialog_GetComponentIndex,
  SavePictureDialog_SetComponentIndex,
  SavePictureDialog_GetOwner,
  SavePictureDialog_GetName,
  SavePictureDialog_SetName,
  SavePictureDialog_GetTag,
  SavePictureDialog_SetTag,
  SavePictureDialog_GetComponents,
  SavePictureDialog_StaticClassType;

