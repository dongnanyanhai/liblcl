
//----------------------------------------
// The code is automatically generated by the GenlibLcl tool.
// Copyright © ying32. All Rights Reserved.
// 
// Licensed under Lazarus.modifiedLGPL
//
//----------------------------------------

function PopupMenu_Create(AOwner: TComponent): TPopupMenu; extdecl;
begin
  handleExceptionBegin
  Result :=  TPopupMenu.Create(AOwner);
  handleExceptionEnd
end;

procedure PopupMenu_Free(AObj: TPopupMenu); extdecl;
begin
  handleExceptionBegin
  AObj.Free;
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure PopupMenu_CloseMenu(AObj: TPopupMenu); extdecl;
begin
  handleExceptionBegin
  AObj.Close;
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure PopupMenu_Popup(AObj: TPopupMenu; X: Integer; Y: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.PopUp(X, Y);
  handleExceptionEnd
end;

//CLASSMETHOD:
function PopupMenu_FindComponent(AObj: TPopupMenu; AName: PChar): TComponent; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.FindComponent(AName);
  handleExceptionEnd
end;

//CLASSMETHOD:
function PopupMenu_GetNamePath(AObj: TPopupMenu): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  PChar(AObj.GetNamePath);
  handleExceptionEnd
end;

//CLASSMETHOD:
function PopupMenu_HasParent(AObj: TPopupMenu): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.HasParent;
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure PopupMenu_Assign(AObj: TPopupMenu; Source: TPersistent); extdecl;
begin
  handleExceptionBegin
  AObj.Assign(Source);
  handleExceptionEnd
end;

//CLASSMETHOD:
function PopupMenu_ClassType(AObj: TPopupMenu): TClass; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ClassType;
  handleExceptionEnd
end;

//CLASSMETHOD:
function PopupMenu_ClassName(AObj: TPopupMenu): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  ToPChar(AObj.ClassName);
  handleExceptionEnd
end;

//CLASSMETHOD:
function PopupMenu_InstanceSize(AObj: TPopupMenu): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.InstanceSize;
  handleExceptionEnd
end;

//CLASSMETHOD:
function PopupMenu_InheritsFrom(AObj: TPopupMenu; AClass: TClass): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.InheritsFrom(AClass);
  handleExceptionEnd
end;

//CLASSMETHOD:
function PopupMenu_Equals(AObj: TPopupMenu; Obj: TObject): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Equals(Obj);
  handleExceptionEnd
end;

//CLASSMETHOD:
function PopupMenu_GetHashCode(AObj: TPopupMenu): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.GetHashCode;
  handleExceptionEnd
end;

//CLASSMETHOD:
function PopupMenu_ToString(AObj: TPopupMenu): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  PChar(AObj.ToString);
  handleExceptionEnd
end;

function PopupMenu_GetImagesWidth(AObj: TPopupMenu): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ImagesWidth;
  handleExceptionEnd
end;

procedure PopupMenu_SetImagesWidth(AObj: TPopupMenu; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.ImagesWidth := AValue;
  handleExceptionEnd
end;

//EVENT_TYPE:TMenuDrawItemEvent
procedure PopupMenu_SetOnDrawItem(AObj: TPopupMenu; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMenuDrawItemEvent}
  {$DEFINE EventName := OnDrawItem}
  EventMethodCode
end;

//EVENT_TYPE:TMenuMeasureItemEvent
procedure PopupMenu_SetOnMeasureItem(AObj: TPopupMenu; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMenuMeasureItemEvent}
  {$DEFINE EventName := OnMeasureItem}
  EventMethodCode
end;

function PopupMenu_GetPopupComponent(AObj: TPopupMenu): TComponent; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.PopupComponent;
  handleExceptionEnd
end;

procedure PopupMenu_SetPopupComponent(AObj: TPopupMenu; AValue: TComponent); extdecl;
begin
  handleExceptionBegin
  AObj.PopupComponent := AValue;
  handleExceptionEnd
end;

//RETURNISLASTPARAM:
procedure PopupMenu_GetPopupPoint(AObj: TPopupMenu; var Result: TPoint); extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.PopupPoint;
  handleExceptionEnd
end;

function PopupMenu_GetAlignment(AObj: TPopupMenu): TPopupAlignment; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Alignment;
  handleExceptionEnd
end;

procedure PopupMenu_SetAlignment(AObj: TPopupMenu; AValue: TPopupAlignment); extdecl;
begin
  handleExceptionBegin
  AObj.Alignment := AValue;
  handleExceptionEnd
end;

function PopupMenu_GetBiDiMode(AObj: TPopupMenu): TBiDiMode; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.BiDiMode;
  handleExceptionEnd
end;

procedure PopupMenu_SetBiDiMode(AObj: TPopupMenu; AValue: TBiDiMode); extdecl;
begin
  handleExceptionBegin
  AObj.BiDiMode := AValue;
  handleExceptionEnd
end;

function PopupMenu_GetImages(AObj: TPopupMenu): TCustomImageList; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Images;
  handleExceptionEnd
end;

procedure PopupMenu_SetImages(AObj: TPopupMenu; AValue: TCustomImageList); extdecl;
begin
  handleExceptionBegin
  AObj.Images := AValue;
  handleExceptionEnd
end;

function PopupMenu_GetOwnerDraw(AObj: TPopupMenu): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.OwnerDraw;
  handleExceptionEnd
end;

procedure PopupMenu_SetOwnerDraw(AObj: TPopupMenu; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.OwnerDraw := AValue;
  handleExceptionEnd
end;

//EVENT_TYPE:TNotifyEvent
procedure PopupMenu_SetOnPopup(AObj: TPopupMenu; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnPopup}
  EventMethodCode
end;

function PopupMenu_GetHandle(AObj: TPopupMenu): HMENU; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Handle;
  handleExceptionEnd
end;

function PopupMenu_GetItems(AObj: TPopupMenu): TMenuItem; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Items;
  handleExceptionEnd
end;

function PopupMenu_GetComponentCount(AObj: TPopupMenu): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ComponentCount;
  handleExceptionEnd
end;

function PopupMenu_GetComponentIndex(AObj: TPopupMenu): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ComponentIndex;
  handleExceptionEnd
end;

procedure PopupMenu_SetComponentIndex(AObj: TPopupMenu; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.ComponentIndex := AValue;
  handleExceptionEnd
end;

function PopupMenu_GetOwner(AObj: TPopupMenu): TComponent; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Owner;
  handleExceptionEnd
end;

function PopupMenu_GetName(AObj: TPopupMenu): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  PChar(AObj.Name);
  handleExceptionEnd
end;

procedure PopupMenu_SetName(AObj: TPopupMenu; AValue: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.Name := AValue;
  handleExceptionEnd
end;

function PopupMenu_GetTag(AObj: TPopupMenu): NativeInt; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Tag;
  handleExceptionEnd
end;

procedure PopupMenu_SetTag(AObj: TPopupMenu; AValue: NativeInt); extdecl;
begin
  handleExceptionBegin
  AObj.Tag := AValue;
  handleExceptionEnd
end;

function PopupMenu_GetComponents(AObj: TPopupMenu; AIndex: Integer): TComponent; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Components[AIndex];
  handleExceptionEnd
end;

function PopupMenu_StaticClassType: TClass; extdecl;
begin
  Result := TPopupMenu;
end;

exports
  PopupMenu_Create,
  PopupMenu_Free,
  PopupMenu_CloseMenu,
  PopupMenu_Popup,
  PopupMenu_FindComponent,
  PopupMenu_GetNamePath,
  PopupMenu_HasParent,
  PopupMenu_Assign,
  PopupMenu_ClassType,
  PopupMenu_ClassName,
  PopupMenu_InstanceSize,
  PopupMenu_InheritsFrom,
  PopupMenu_Equals,
  PopupMenu_GetHashCode,
  PopupMenu_ToString,
  PopupMenu_GetImagesWidth,
  PopupMenu_SetImagesWidth,
  PopupMenu_SetOnDrawItem,
  PopupMenu_SetOnMeasureItem,
  PopupMenu_GetPopupComponent,
  PopupMenu_SetPopupComponent,
  PopupMenu_GetPopupPoint,
  PopupMenu_GetAlignment,
  PopupMenu_SetAlignment,
  PopupMenu_GetBiDiMode,
  PopupMenu_SetBiDiMode,
  PopupMenu_GetImages,
  PopupMenu_SetImages,
  PopupMenu_GetOwnerDraw,
  PopupMenu_SetOwnerDraw,
  PopupMenu_SetOnPopup,
  PopupMenu_GetHandle,
  PopupMenu_GetItems,
  PopupMenu_GetComponentCount,
  PopupMenu_GetComponentIndex,
  PopupMenu_SetComponentIndex,
  PopupMenu_GetOwner,
  PopupMenu_GetName,
  PopupMenu_SetName,
  PopupMenu_GetTag,
  PopupMenu_SetTag,
  PopupMenu_GetComponents,
  PopupMenu_StaticClassType;

