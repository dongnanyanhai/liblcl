
//----------------------------------------
// The code is automatically generated by the GenlibLcl tool.
// Copyright © ying32. All Rights Reserved.
// 
// Licensed under Lazarus.modifiedLGPL
//
//----------------------------------------

function PrintDialog_Create(AOwner: TComponent): TPrintDialog; extdecl;
begin
  handleExceptionBegin
  Result :=  TPrintDialog.Create(AOwner);
  handleExceptionEnd
end;

procedure PrintDialog_Free(AObj: TPrintDialog); extdecl;
begin
  handleExceptionBegin
  AObj.Free;
  handleExceptionEnd
end;

//CLASSMETHOD:
function PrintDialog_Execute(AObj: TPrintDialog): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Execute;
  handleExceptionEnd
end;

//CLASSMETHOD:
function PrintDialog_FindComponent(AObj: TPrintDialog; AName: PChar): TComponent; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.FindComponent(AName);
  handleExceptionEnd
end;

//CLASSMETHOD:
function PrintDialog_GetNamePath(AObj: TPrintDialog): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  PChar(AObj.GetNamePath);
  handleExceptionEnd
end;

//CLASSMETHOD:
function PrintDialog_HasParent(AObj: TPrintDialog): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.HasParent;
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure PrintDialog_Assign(AObj: TPrintDialog; Source: TPersistent); extdecl;
begin
  handleExceptionBegin
  AObj.Assign(Source);
  handleExceptionEnd
end;

//CLASSMETHOD:
function PrintDialog_ClassType(AObj: TPrintDialog): TClass; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ClassType;
  handleExceptionEnd
end;

//CLASSMETHOD:
function PrintDialog_ClassName(AObj: TPrintDialog): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  ToPChar(AObj.ClassName);
  handleExceptionEnd
end;

//CLASSMETHOD:
function PrintDialog_InstanceSize(AObj: TPrintDialog): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.InstanceSize;
  handleExceptionEnd
end;

//CLASSMETHOD:
function PrintDialog_InheritsFrom(AObj: TPrintDialog; AClass: TClass): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.InheritsFrom(AClass);
  handleExceptionEnd
end;

//CLASSMETHOD:
function PrintDialog_Equals(AObj: TPrintDialog; Obj: TObject): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Equals(Obj);
  handleExceptionEnd
end;

//CLASSMETHOD:
function PrintDialog_GetHashCode(AObj: TPrintDialog): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.GetHashCode;
  handleExceptionEnd
end;

//CLASSMETHOD:
function PrintDialog_ToString(AObj: TPrintDialog): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  PChar(AObj.ToString);
  handleExceptionEnd
end;

function PrintDialog_GetCollate(AObj: TPrintDialog): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Collate;
  handleExceptionEnd
end;

procedure PrintDialog_SetCollate(AObj: TPrintDialog; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.Collate := AValue;
  handleExceptionEnd
end;

function PrintDialog_GetCopies(AObj: TPrintDialog): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Copies;
  handleExceptionEnd
end;

procedure PrintDialog_SetCopies(AObj: TPrintDialog; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Copies := AValue;
  handleExceptionEnd
end;

function PrintDialog_GetFromPage(AObj: TPrintDialog): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.FromPage;
  handleExceptionEnd
end;

procedure PrintDialog_SetFromPage(AObj: TPrintDialog; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.FromPage := AValue;
  handleExceptionEnd
end;

function PrintDialog_GetMinPage(AObj: TPrintDialog): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.MinPage;
  handleExceptionEnd
end;

procedure PrintDialog_SetMinPage(AObj: TPrintDialog; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.MinPage := AValue;
  handleExceptionEnd
end;

function PrintDialog_GetMaxPage(AObj: TPrintDialog): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.MaxPage;
  handleExceptionEnd
end;

procedure PrintDialog_SetMaxPage(AObj: TPrintDialog; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.MaxPage := AValue;
  handleExceptionEnd
end;

function PrintDialog_GetOptions(AObj: TPrintDialog): TPrintDialogOptions; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Options;
  handleExceptionEnd
end;

procedure PrintDialog_SetOptions(AObj: TPrintDialog; AValue: TPrintDialogOptions); extdecl;
begin
  handleExceptionBegin
  AObj.Options := AValue;
  handleExceptionEnd
end;

function PrintDialog_GetPrintToFile(AObj: TPrintDialog): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.PrintToFile;
  handleExceptionEnd
end;

procedure PrintDialog_SetPrintToFile(AObj: TPrintDialog; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.PrintToFile := AValue;
  handleExceptionEnd
end;

function PrintDialog_GetPrintRange(AObj: TPrintDialog): TPrintRange; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.PrintRange;
  handleExceptionEnd
end;

procedure PrintDialog_SetPrintRange(AObj: TPrintDialog; AValue: TPrintRange); extdecl;
begin
  handleExceptionBegin
  AObj.PrintRange := AValue;
  handleExceptionEnd
end;

function PrintDialog_GetToPage(AObj: TPrintDialog): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ToPage;
  handleExceptionEnd
end;

procedure PrintDialog_SetToPage(AObj: TPrintDialog; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.ToPage := AValue;
  handleExceptionEnd
end;

function PrintDialog_GetHandle(AObj: TPrintDialog): HWND; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Handle;
  handleExceptionEnd
end;

//EVENT_TYPE:TNotifyEvent
procedure PrintDialog_SetOnClose(AObj: TPrintDialog; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnClose}
  EventMethodCode
end;

//EVENT_TYPE:TNotifyEvent
procedure PrintDialog_SetOnShow(AObj: TPrintDialog; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnShow}
  EventMethodCode
end;

function PrintDialog_GetComponentCount(AObj: TPrintDialog): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ComponentCount;
  handleExceptionEnd
end;

function PrintDialog_GetComponentIndex(AObj: TPrintDialog): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ComponentIndex;
  handleExceptionEnd
end;

procedure PrintDialog_SetComponentIndex(AObj: TPrintDialog; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.ComponentIndex := AValue;
  handleExceptionEnd
end;

function PrintDialog_GetOwner(AObj: TPrintDialog): TComponent; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Owner;
  handleExceptionEnd
end;

function PrintDialog_GetName(AObj: TPrintDialog): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  PChar(AObj.Name);
  handleExceptionEnd
end;

procedure PrintDialog_SetName(AObj: TPrintDialog; AValue: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.Name := AValue;
  handleExceptionEnd
end;

function PrintDialog_GetTag(AObj: TPrintDialog): NativeInt; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Tag;
  handleExceptionEnd
end;

procedure PrintDialog_SetTag(AObj: TPrintDialog; AValue: NativeInt); extdecl;
begin
  handleExceptionBegin
  AObj.Tag := AValue;
  handleExceptionEnd
end;

function PrintDialog_GetComponents(AObj: TPrintDialog; AIndex: Integer): TComponent; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Components[AIndex];
  handleExceptionEnd
end;

function PrintDialog_StaticClassType: TClass; extdecl;
begin
  Result := TPrintDialog;
end;

exports
  PrintDialog_Create,
  PrintDialog_Free,
  PrintDialog_Execute,
  PrintDialog_FindComponent,
  PrintDialog_GetNamePath,
  PrintDialog_HasParent,
  PrintDialog_Assign,
  PrintDialog_ClassType,
  PrintDialog_ClassName,
  PrintDialog_InstanceSize,
  PrintDialog_InheritsFrom,
  PrintDialog_Equals,
  PrintDialog_GetHashCode,
  PrintDialog_ToString,
  PrintDialog_GetCollate,
  PrintDialog_SetCollate,
  PrintDialog_GetCopies,
  PrintDialog_SetCopies,
  PrintDialog_GetFromPage,
  PrintDialog_SetFromPage,
  PrintDialog_GetMinPage,
  PrintDialog_SetMinPage,
  PrintDialog_GetMaxPage,
  PrintDialog_SetMaxPage,
  PrintDialog_GetOptions,
  PrintDialog_SetOptions,
  PrintDialog_GetPrintToFile,
  PrintDialog_SetPrintToFile,
  PrintDialog_GetPrintRange,
  PrintDialog_SetPrintRange,
  PrintDialog_GetToPage,
  PrintDialog_SetToPage,
  PrintDialog_GetHandle,
  PrintDialog_SetOnClose,
  PrintDialog_SetOnShow,
  PrintDialog_GetComponentCount,
  PrintDialog_GetComponentIndex,
  PrintDialog_SetComponentIndex,
  PrintDialog_GetOwner,
  PrintDialog_GetName,
  PrintDialog_SetName,
  PrintDialog_GetTag,
  PrintDialog_SetTag,
  PrintDialog_GetComponents,
  PrintDialog_StaticClassType;

