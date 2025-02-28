
//----------------------------------------
// The code is automatically generated by the GenlibLcl tool.
// Copyright © ying32. All Rights Reserved.
// 
// Licensed under Lazarus.modifiedLGPL
//
//----------------------------------------

function GroupBox_Create(AOwner: TComponent): TGroupBox; extdecl;
begin
  handleExceptionBegin
  Result :=  TGroupBox.Create(AOwner);
  handleExceptionEnd
end;

procedure GroupBox_Free(AObj: TGroupBox); extdecl;
begin
  handleExceptionBegin
  AObj.Free;
  handleExceptionEnd
end;

//CLASSMETHOD:
function GroupBox_CanFocus(AObj: TGroupBox): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.CanFocus;
  handleExceptionEnd
end;

//CLASSMETHOD:
function GroupBox_ContainsControl(AObj: TGroupBox; Control: TControl): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ContainsControl(Control);
  handleExceptionEnd
end;

//CLASSMETHOD:
//PARAMS:2=nonPtr
function GroupBox_ControlAtPos(AObj: TGroupBox; var Pos: TPoint; AllowDisabled: LongBool; AllowWinControls: LongBool): TControl; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ControlAtPos(Pos, AllowDisabled, AllowWinControls);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure GroupBox_DisableAlign(AObj: TGroupBox); extdecl;
begin
  handleExceptionBegin
  AObj.DisableAlign;
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure GroupBox_EnableAlign(AObj: TGroupBox); extdecl;
begin
  handleExceptionBegin
  AObj.EnableAlign;
  handleExceptionEnd
end;

//CLASSMETHOD:
function GroupBox_FindChildControl(AObj: TGroupBox; ControlName: PChar): TControl; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.FindChildControl(ControlName);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure GroupBox_FlipChildren(AObj: TGroupBox; AllLevels: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.FlipChildren(AllLevels);
  handleExceptionEnd
end;

//CLASSMETHOD:
function GroupBox_Focused(AObj: TGroupBox): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Focused;
  handleExceptionEnd
end;

//CLASSMETHOD:
function GroupBox_HandleAllocated(AObj: TGroupBox): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.HandleAllocated;
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure GroupBox_InsertControl(AObj: TGroupBox; AControl: TControl); extdecl;
begin
  handleExceptionBegin
  AObj.InsertControl(AControl);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure GroupBox_Invalidate(AObj: TGroupBox); extdecl;
begin
  handleExceptionBegin
  AObj.Invalidate;
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure GroupBox_PaintTo(AObj: TGroupBox; DC: HDC; X: Integer; Y: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.PaintTo(DC, X, Y);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure GroupBox_RemoveControl(AObj: TGroupBox; AControl: TControl); extdecl;
begin
  handleExceptionBegin
  AObj.RemoveControl(AControl);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure GroupBox_Realign(AObj: TGroupBox); extdecl;
begin
  handleExceptionBegin
  AObj.Realign;
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure GroupBox_Repaint(AObj: TGroupBox); extdecl;
begin
  handleExceptionBegin
  AObj.Repaint;
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure GroupBox_ScaleBy(AObj: TGroupBox; M: Integer; D: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.ScaleBy(M, D);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure GroupBox_ScrollBy(AObj: TGroupBox; DeltaX: Integer; DeltaY: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.ScrollBy(DeltaX, DeltaY);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure GroupBox_SetBounds(AObj: TGroupBox; ALeft: Integer; ATop: Integer; AWidth: Integer; AHeight: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.SetBounds(ALeft, ATop, AWidth, AHeight);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure GroupBox_SetFocus(AObj: TGroupBox); extdecl;
begin
  handleExceptionBegin
  AObj.SetFocus;
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure GroupBox_Update(AObj: TGroupBox); extdecl;
begin
  handleExceptionBegin
  AObj.Update;
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure GroupBox_BringToFront(AObj: TGroupBox); extdecl;
begin
  handleExceptionBegin
  AObj.BringToFront;
  handleExceptionEnd
end;

//CLASSMETHOD:
//RETURNISLASTPARAM:
//PARAMS:2=nonPtr
procedure GroupBox_ClientToScreen(AObj: TGroupBox; var Point: TPoint; var Result: TPoint); extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ClientToScreen(Point);
  handleExceptionEnd
end;

//CLASSMETHOD:
//RETURNISLASTPARAM:
//PARAMS:2=nonPtr
procedure GroupBox_ClientToParent(AObj: TGroupBox; var Point: TPoint; AParent: TWinControl; var Result: TPoint); extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ClientToParent(Point, AParent);
  handleExceptionEnd
end;

//CLASSMETHOD:
function GroupBox_Dragging(AObj: TGroupBox): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Dragging;
  handleExceptionEnd
end;

//CLASSMETHOD:
function GroupBox_HasParent(AObj: TGroupBox): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.HasParent;
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure GroupBox_Hide(AObj: TGroupBox); extdecl;
begin
  handleExceptionBegin
  AObj.Hide;
  handleExceptionEnd
end;

//CLASSMETHOD:
function GroupBox_Perform(AObj: TGroupBox; Msg: Cardinal; WParam: NativeUInt; LParam: NativeInt): NativeInt; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Perform(Msg, WParam, LParam);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure GroupBox_Refresh(AObj: TGroupBox); extdecl;
begin
  handleExceptionBegin
  AObj.Refresh;
  handleExceptionEnd
end;

//CLASSMETHOD:
//RETURNISLASTPARAM:
//PARAMS:2=nonPtr
procedure GroupBox_ScreenToClient(AObj: TGroupBox; var Point: TPoint; var Result: TPoint); extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ScreenToClient(Point);
  handleExceptionEnd
end;

//CLASSMETHOD:
//RETURNISLASTPARAM:
//PARAMS:2=nonPtr
procedure GroupBox_ParentToClient(AObj: TGroupBox; var Point: TPoint; AParent: TWinControl; var Result: TPoint); extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ParentToClient(Point, AParent);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure GroupBox_SendToBack(AObj: TGroupBox); extdecl;
begin
  handleExceptionBegin
  AObj.SendToBack;
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure GroupBox_Show(AObj: TGroupBox); extdecl;
begin
  handleExceptionBegin
  AObj.Show;
  handleExceptionEnd
end;

//CLASSMETHOD:
function GroupBox_GetTextBuf(AObj: TGroupBox; Buffer: PChar; BufSize: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.GetTextBuf(Buffer, BufSize);
  handleExceptionEnd
end;

//CLASSMETHOD:
function GroupBox_GetTextLen(AObj: TGroupBox): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  {$ifdef darwin}Length(AObj.Caption){$else}AObj.GetTextLen{$endif};
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure GroupBox_SetTextBuf(AObj: TGroupBox; Buffer: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.SetTextBuf(Buffer);
  handleExceptionEnd
end;

//CLASSMETHOD:
function GroupBox_FindComponent(AObj: TGroupBox; AName: PChar): TComponent; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.FindComponent(AName);
  handleExceptionEnd
end;

//CLASSMETHOD:
function GroupBox_GetNamePath(AObj: TGroupBox): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  PChar(AObj.GetNamePath);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure GroupBox_Assign(AObj: TGroupBox; Source: TPersistent); extdecl;
begin
  handleExceptionBegin
  AObj.Assign(Source);
  handleExceptionEnd
end;

//CLASSMETHOD:
function GroupBox_ClassType(AObj: TGroupBox): TClass; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ClassType;
  handleExceptionEnd
end;

//CLASSMETHOD:
function GroupBox_ClassName(AObj: TGroupBox): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  ToPChar(AObj.ClassName);
  handleExceptionEnd
end;

//CLASSMETHOD:
function GroupBox_InstanceSize(AObj: TGroupBox): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.InstanceSize;
  handleExceptionEnd
end;

//CLASSMETHOD:
function GroupBox_InheritsFrom(AObj: TGroupBox; AClass: TClass): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.InheritsFrom(AClass);
  handleExceptionEnd
end;

//CLASSMETHOD:
function GroupBox_Equals(AObj: TGroupBox; Obj: TObject): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Equals(Obj);
  handleExceptionEnd
end;

//CLASSMETHOD:
function GroupBox_GetHashCode(AObj: TGroupBox): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.GetHashCode;
  handleExceptionEnd
end;

//CLASSMETHOD:
function GroupBox_ToString(AObj: TGroupBox): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  PChar(AObj.ToString);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure GroupBox_AnchorToNeighbour(AObj: TGroupBox; ASide: TAnchorKind; ASpace: Integer; ASibling: TControl); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorToNeighbour(ASide, ASpace, ASibling);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure GroupBox_AnchorParallel(AObj: TGroupBox; ASide: TAnchorKind; ASpace: Integer; ASibling: TControl); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorParallel(ASide, ASpace, ASibling);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure GroupBox_AnchorHorizontalCenterTo(AObj: TGroupBox; ASibling: TControl); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorHorizontalCenterTo(ASibling);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure GroupBox_AnchorVerticalCenterTo(AObj: TGroupBox; ASibling: TControl); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorVerticalCenterTo(ASibling);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure GroupBox_AnchorSame(AObj: TGroupBox; ASide: TAnchorKind; ASibling: TControl); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorSame(ASide, ASibling);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure GroupBox_AnchorAsAlign(AObj: TGroupBox; ATheAlign: TAlign; ASpace: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorAsAlign(ATheAlign, ASpace);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure GroupBox_AnchorClient(AObj: TGroupBox; ASpace: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorClient(ASpace);
  handleExceptionEnd
end;

//CLASSMETHOD:
function GroupBox_ScaleDesignToForm(AObj: TGroupBox; ASize: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ScaleDesignToForm(ASize);
  handleExceptionEnd
end;

//CLASSMETHOD:
function GroupBox_ScaleFormToDesign(AObj: TGroupBox; ASize: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ScaleFormToDesign(ASize);
  handleExceptionEnd
end;

//CLASSMETHOD:
function GroupBox_Scale96ToForm(AObj: TGroupBox; ASize: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Scale96ToForm(ASize);
  handleExceptionEnd
end;

//CLASSMETHOD:
function GroupBox_ScaleFormTo96(AObj: TGroupBox; ASize: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ScaleFormTo96(ASize);
  handleExceptionEnd
end;

//CLASSMETHOD:
function GroupBox_Scale96ToFont(AObj: TGroupBox; ASize: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Scale96ToFont(ASize);
  handleExceptionEnd
end;

//CLASSMETHOD:
function GroupBox_ScaleFontTo96(AObj: TGroupBox; ASize: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ScaleFontTo96(ASize);
  handleExceptionEnd
end;

//CLASSMETHOD:
function GroupBox_ScaleScreenToFont(AObj: TGroupBox; ASize: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ScaleScreenToFont(ASize);
  handleExceptionEnd
end;

//CLASSMETHOD:
function GroupBox_ScaleFontToScreen(AObj: TGroupBox; ASize: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ScaleFontToScreen(ASize);
  handleExceptionEnd
end;

//CLASSMETHOD:
function GroupBox_Scale96ToScreen(AObj: TGroupBox; ASize: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Scale96ToScreen(ASize);
  handleExceptionEnd
end;

//CLASSMETHOD:
function GroupBox_ScaleScreenTo96(AObj: TGroupBox; ASize: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ScaleScreenTo96(ASize);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure GroupBox_AutoAdjustLayout(AObj: TGroupBox; AMode: TLayoutAdjustmentPolicy; AFromPPI: Integer; AToPPI: Integer; AOldFormWidth: Integer; ANewFormWidth: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.AutoAdjustLayout(AMode, AFromPPI, AToPPI, AOldFormWidth, ANewFormWidth);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure GroupBox_FixDesignFontsPPI(AObj: TGroupBox; ADesignTimePPI: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.FixDesignFontsPPI(ADesignTimePPI);
  handleExceptionEnd
end;

//CLASSMETHOD:
//PARAMS:3=nonPtr
procedure GroupBox_ScaleFontsPPI(AObj: TGroupBox; AToPPI: Integer; var AProportion: Double); extdecl;
begin
  handleExceptionBegin
  AObj.ScaleFontsPPI(AToPPI, AProportion);
  handleExceptionEnd
end;

function GroupBox_GetAlign(AObj: TGroupBox): TAlign; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Align;
  handleExceptionEnd
end;

procedure GroupBox_SetAlign(AObj: TGroupBox; AValue: TAlign); extdecl;
begin
  handleExceptionBegin
  AObj.Align := AValue;
  handleExceptionEnd
end;

function GroupBox_GetAnchors(AObj: TGroupBox): TAnchors; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Anchors;
  handleExceptionEnd
end;

procedure GroupBox_SetAnchors(AObj: TGroupBox; AValue: TAnchors); extdecl;
begin
  handleExceptionBegin
  AObj.Anchors := AValue;
  handleExceptionEnd
end;

function GroupBox_GetBiDiMode(AObj: TGroupBox): TBiDiMode; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.BiDiMode;
  handleExceptionEnd
end;

procedure GroupBox_SetBiDiMode(AObj: TGroupBox; AValue: TBiDiMode); extdecl;
begin
  handleExceptionBegin
  AObj.BiDiMode := AValue;
  handleExceptionEnd
end;

function GroupBox_GetCaption(AObj: TGroupBox): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  PChar(AObj.Caption);
  handleExceptionEnd
end;

procedure GroupBox_SetCaption(AObj: TGroupBox; AValue: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.Caption := AValue;
  handleExceptionEnd
end;

function GroupBox_GetColor(AObj: TGroupBox): TColor; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Color;
  handleExceptionEnd
end;

procedure GroupBox_SetColor(AObj: TGroupBox; AValue: TColor); extdecl;
begin
  handleExceptionBegin
  AObj.Color := AValue;
  handleExceptionEnd
end;

function GroupBox_GetConstraints(AObj: TGroupBox): TSizeConstraints; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Constraints;
  handleExceptionEnd
end;

procedure GroupBox_SetConstraints(AObj: TGroupBox; AValue: TSizeConstraints); extdecl;
begin
  handleExceptionBegin
  AObj.Constraints := AValue;
  handleExceptionEnd
end;

function GroupBox_GetDockSite(AObj: TGroupBox): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.DockSite;
  handleExceptionEnd
end;

procedure GroupBox_SetDockSite(AObj: TGroupBox; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.DockSite := AValue;
  handleExceptionEnd
end;

function GroupBox_GetDoubleBuffered(AObj: TGroupBox): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.DoubleBuffered;
  handleExceptionEnd
end;

procedure GroupBox_SetDoubleBuffered(AObj: TGroupBox; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.DoubleBuffered := AValue;
  handleExceptionEnd
end;

function GroupBox_GetDragCursor(AObj: TGroupBox): TCursor; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.DragCursor;
  handleExceptionEnd
end;

procedure GroupBox_SetDragCursor(AObj: TGroupBox; AValue: TCursor); extdecl;
begin
  handleExceptionBegin
  AObj.DragCursor := AValue;
  handleExceptionEnd
end;

function GroupBox_GetDragKind(AObj: TGroupBox): TDragKind; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.DragKind;
  handleExceptionEnd
end;

procedure GroupBox_SetDragKind(AObj: TGroupBox; AValue: TDragKind); extdecl;
begin
  handleExceptionBegin
  AObj.DragKind := AValue;
  handleExceptionEnd
end;

function GroupBox_GetDragMode(AObj: TGroupBox): TDragMode; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.DragMode;
  handleExceptionEnd
end;

procedure GroupBox_SetDragMode(AObj: TGroupBox; AValue: TDragMode); extdecl;
begin
  handleExceptionBegin
  AObj.DragMode := AValue;
  handleExceptionEnd
end;

function GroupBox_GetEnabled(AObj: TGroupBox): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Enabled;
  handleExceptionEnd
end;

procedure GroupBox_SetEnabled(AObj: TGroupBox; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.Enabled := AValue;
  handleExceptionEnd
end;

function GroupBox_GetFont(AObj: TGroupBox): TFont; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Font;
  handleExceptionEnd
end;

procedure GroupBox_SetFont(AObj: TGroupBox; AValue: TFont); extdecl;
begin
  handleExceptionBegin
  AObj.Font := AValue;
  handleExceptionEnd
end;

function GroupBox_GetParentBackground(AObj: TGroupBox): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ParentBackground;
  handleExceptionEnd
end;

procedure GroupBox_SetParentBackground(AObj: TGroupBox; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.ParentBackground := AValue;
  handleExceptionEnd
end;

function GroupBox_GetParentColor(AObj: TGroupBox): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ParentColor;
  handleExceptionEnd
end;

procedure GroupBox_SetParentColor(AObj: TGroupBox; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.ParentColor := AValue;
  handleExceptionEnd
end;

function GroupBox_GetParentDoubleBuffered(AObj: TGroupBox): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ParentDoubleBuffered;
  handleExceptionEnd
end;

procedure GroupBox_SetParentDoubleBuffered(AObj: TGroupBox; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.ParentDoubleBuffered := AValue;
  handleExceptionEnd
end;

function GroupBox_GetParentFont(AObj: TGroupBox): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ParentFont;
  handleExceptionEnd
end;

procedure GroupBox_SetParentFont(AObj: TGroupBox; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.ParentFont := AValue;
  handleExceptionEnd
end;

function GroupBox_GetParentShowHint(AObj: TGroupBox): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ParentShowHint;
  handleExceptionEnd
end;

procedure GroupBox_SetParentShowHint(AObj: TGroupBox; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.ParentShowHint := AValue;
  handleExceptionEnd
end;

function GroupBox_GetPopupMenu(AObj: TGroupBox): TPopupMenu; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.PopupMenu;
  handleExceptionEnd
end;

procedure GroupBox_SetPopupMenu(AObj: TGroupBox; AValue: TPopupMenu); extdecl;
begin
  handleExceptionBegin
  AObj.PopupMenu := AValue;
  handleExceptionEnd
end;

function GroupBox_GetShowHint(AObj: TGroupBox): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ShowHint;
  handleExceptionEnd
end;

procedure GroupBox_SetShowHint(AObj: TGroupBox; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.ShowHint := AValue;
  handleExceptionEnd
end;

function GroupBox_GetTabOrder(AObj: TGroupBox): TTabOrder; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.TabOrder;
  handleExceptionEnd
end;

procedure GroupBox_SetTabOrder(AObj: TGroupBox; AValue: TTabOrder); extdecl;
begin
  handleExceptionBegin
  AObj.TabOrder := AValue;
  handleExceptionEnd
end;

function GroupBox_GetTabStop(AObj: TGroupBox): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.TabStop;
  handleExceptionEnd
end;

procedure GroupBox_SetTabStop(AObj: TGroupBox; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.TabStop := AValue;
  handleExceptionEnd
end;

function GroupBox_GetVisible(AObj: TGroupBox): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Visible;
  handleExceptionEnd
end;

procedure GroupBox_SetVisible(AObj: TGroupBox; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.Visible := AValue;
  handleExceptionEnd
end;

//EVENT_TYPE:TAlignPositionEvent
procedure GroupBox_SetOnAlignPosition(AObj: TGroupBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTAlignPositionEvent}
  {$DEFINE EventName := OnAlignPosition}
  EventMethodCode
end;

//EVENT_TYPE:TNotifyEvent
procedure GroupBox_SetOnClick(AObj: TGroupBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnClick}
  EventMethodCode
end;

//EVENT_TYPE:TContextPopupEvent
procedure GroupBox_SetOnContextPopup(AObj: TGroupBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  EventMethodCode
end;

//EVENT_TYPE:TNotifyEvent
procedure GroupBox_SetOnDblClick(AObj: TGroupBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDblClick}
  EventMethodCode
end;

//EVENT_TYPE:TDragDropEvent
procedure GroupBox_SetOnDragDrop(AObj: TGroupBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  EventMethodCode
end;

//EVENT_TYPE:TDockDropEvent
procedure GroupBox_SetOnDockDrop(AObj: TGroupBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDockDropEvent}
  {$DEFINE EventName := OnDockDrop}
  EventMethodCode
end;

//EVENT_TYPE:TDragOverEvent
procedure GroupBox_SetOnDragOver(AObj: TGroupBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  EventMethodCode
end;

//EVENT_TYPE:TEndDragEvent
procedure GroupBox_SetOnEndDock(AObj: TGroupBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDock}
  EventMethodCode
end;

//EVENT_TYPE:TEndDragEvent
procedure GroupBox_SetOnEndDrag(AObj: TGroupBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  EventMethodCode
end;

//EVENT_TYPE:TNotifyEvent
procedure GroupBox_SetOnEnter(AObj: TGroupBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnEnter}
  EventMethodCode
end;

//EVENT_TYPE:TNotifyEvent
procedure GroupBox_SetOnExit(AObj: TGroupBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnExit}
  EventMethodCode
end;

//EVENT_TYPE:TGetSiteInfoEvent
procedure GroupBox_SetOnGetSiteInfo(AObj: TGroupBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTGetSiteInfoEvent}
  {$DEFINE EventName := OnGetSiteInfo}
  EventMethodCode
end;

//EVENT_TYPE:TMouseEvent
procedure GroupBox_SetOnMouseDown(AObj: TGroupBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  EventMethodCode
end;

//EVENT_TYPE:TNotifyEvent
procedure GroupBox_SetOnMouseEnter(AObj: TGroupBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  EventMethodCode
end;

//EVENT_TYPE:TNotifyEvent
procedure GroupBox_SetOnMouseLeave(AObj: TGroupBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  EventMethodCode
end;

//EVENT_TYPE:TMouseMoveEvent
procedure GroupBox_SetOnMouseMove(AObj: TGroupBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  EventMethodCode
end;

//EVENT_TYPE:TMouseEvent
procedure GroupBox_SetOnMouseUp(AObj: TGroupBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  EventMethodCode
end;

//EVENT_TYPE:TStartDockEvent
procedure GroupBox_SetOnStartDock(AObj: TGroupBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDockEvent}
  {$DEFINE EventName := OnStartDock}
  EventMethodCode
end;

//EVENT_TYPE:TUnDockEvent
procedure GroupBox_SetOnUnDock(AObj: TGroupBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTUnDockEvent}
  {$DEFINE EventName := OnUnDock}
  EventMethodCode
end;

function GroupBox_GetDockClientCount(AObj: TGroupBox): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.DockClientCount;
  handleExceptionEnd
end;

function GroupBox_GetMouseInClient(AObj: TGroupBox): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.MouseInClient;
  handleExceptionEnd
end;

function GroupBox_GetVisibleDockClientCount(AObj: TGroupBox): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.VisibleDockClientCount;
  handleExceptionEnd
end;

function GroupBox_GetBrush(AObj: TGroupBox): TBrush; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Brush;
  handleExceptionEnd
end;

function GroupBox_GetControlCount(AObj: TGroupBox): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ControlCount;
  handleExceptionEnd
end;

function GroupBox_GetHandle(AObj: TGroupBox): HWND; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Handle;
  handleExceptionEnd
end;

function GroupBox_GetParentWindow(AObj: TGroupBox): HWND; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ParentWindow;
  handleExceptionEnd
end;

procedure GroupBox_SetParentWindow(AObj: TGroupBox; AValue: HWND); extdecl;
begin
  handleExceptionBegin
  AObj.ParentWindow := AValue;
  handleExceptionEnd
end;

function GroupBox_GetShowing(AObj: TGroupBox): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Showing;
  handleExceptionEnd
end;

function GroupBox_GetUseDockManager(AObj: TGroupBox): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.UseDockManager;
  handleExceptionEnd
end;

procedure GroupBox_SetUseDockManager(AObj: TGroupBox; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.UseDockManager := AValue;
  handleExceptionEnd
end;

function GroupBox_GetAction(AObj: TGroupBox): TBasicAction; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Action;
  handleExceptionEnd
end;

procedure GroupBox_SetAction(AObj: TGroupBox; AValue: TBasicAction); extdecl;
begin
  handleExceptionBegin
  AObj.Action := AValue;
  handleExceptionEnd
end;

//RETURNISLASTPARAM:
procedure GroupBox_GetBoundsRect(AObj: TGroupBox; var Result: TRect); extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.BoundsRect;
  handleExceptionEnd
end;

//PARAMS:2=nonPtr
procedure GroupBox_SetBoundsRect(AObj: TGroupBox; var AValue: TRect); extdecl;
begin
  handleExceptionBegin
  AObj.BoundsRect := AValue;
  handleExceptionEnd
end;

function GroupBox_GetClientHeight(AObj: TGroupBox): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ClientHeight;
  handleExceptionEnd
end;

procedure GroupBox_SetClientHeight(AObj: TGroupBox; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.ClientHeight := AValue;
  handleExceptionEnd
end;

//RETURNISLASTPARAM:
procedure GroupBox_GetClientOrigin(AObj: TGroupBox; var Result: TPoint); extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ClientOrigin;
  handleExceptionEnd
end;

//RETURNISLASTPARAM:
procedure GroupBox_GetClientRect(AObj: TGroupBox; var Result: TRect); extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ClientRect;
  handleExceptionEnd
end;

function GroupBox_GetClientWidth(AObj: TGroupBox): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ClientWidth;
  handleExceptionEnd
end;

procedure GroupBox_SetClientWidth(AObj: TGroupBox; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.ClientWidth := AValue;
  handleExceptionEnd
end;

function GroupBox_GetControlState(AObj: TGroupBox): TControlState; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ControlState;
  handleExceptionEnd
end;

procedure GroupBox_SetControlState(AObj: TGroupBox; AValue: TControlState); extdecl;
begin
  handleExceptionBegin
  AObj.ControlState := AValue;
  handleExceptionEnd
end;

function GroupBox_GetControlStyle(AObj: TGroupBox): TControlStyle; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ControlStyle;
  handleExceptionEnd
end;

procedure GroupBox_SetControlStyle(AObj: TGroupBox; AValue: TControlStyle); extdecl;
begin
  handleExceptionBegin
  AObj.ControlStyle := AValue;
  handleExceptionEnd
end;

function GroupBox_GetFloating(AObj: TGroupBox): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Floating;
  handleExceptionEnd
end;

function GroupBox_GetParent(AObj: TGroupBox): TWinControl; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Parent;
  handleExceptionEnd
end;

procedure GroupBox_SetParent(AObj: TGroupBox; AValue: TWinControl); extdecl;
begin
  handleExceptionBegin
  AObj.Parent := AValue;
  handleExceptionEnd
end;

function GroupBox_GetLeft(AObj: TGroupBox): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Left;
  handleExceptionEnd
end;

procedure GroupBox_SetLeft(AObj: TGroupBox; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Left := AValue;
  handleExceptionEnd
end;

function GroupBox_GetTop(AObj: TGroupBox): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Top;
  handleExceptionEnd
end;

procedure GroupBox_SetTop(AObj: TGroupBox; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Top := AValue;
  handleExceptionEnd
end;

function GroupBox_GetWidth(AObj: TGroupBox): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Width;
  handleExceptionEnd
end;

procedure GroupBox_SetWidth(AObj: TGroupBox; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Width := AValue;
  handleExceptionEnd
end;

function GroupBox_GetHeight(AObj: TGroupBox): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Height;
  handleExceptionEnd
end;

procedure GroupBox_SetHeight(AObj: TGroupBox; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Height := AValue;
  handleExceptionEnd
end;

function GroupBox_GetCursor(AObj: TGroupBox): TCursor; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Cursor;
  handleExceptionEnd
end;

procedure GroupBox_SetCursor(AObj: TGroupBox; AValue: TCursor); extdecl;
begin
  handleExceptionBegin
  AObj.Cursor := AValue;
  handleExceptionEnd
end;

function GroupBox_GetHint(AObj: TGroupBox): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  PChar(AObj.Hint);
  handleExceptionEnd
end;

procedure GroupBox_SetHint(AObj: TGroupBox; AValue: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.Hint := AValue;
  handleExceptionEnd
end;

function GroupBox_GetComponentCount(AObj: TGroupBox): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ComponentCount;
  handleExceptionEnd
end;

function GroupBox_GetComponentIndex(AObj: TGroupBox): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ComponentIndex;
  handleExceptionEnd
end;

procedure GroupBox_SetComponentIndex(AObj: TGroupBox; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.ComponentIndex := AValue;
  handleExceptionEnd
end;

function GroupBox_GetOwner(AObj: TGroupBox): TComponent; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Owner;
  handleExceptionEnd
end;

function GroupBox_GetName(AObj: TGroupBox): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  PChar(AObj.Name);
  handleExceptionEnd
end;

procedure GroupBox_SetName(AObj: TGroupBox; AValue: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.Name := AValue;
  handleExceptionEnd
end;

function GroupBox_GetTag(AObj: TGroupBox): NativeInt; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Tag;
  handleExceptionEnd
end;

procedure GroupBox_SetTag(AObj: TGroupBox; AValue: NativeInt); extdecl;
begin
  handleExceptionBegin
  AObj.Tag := AValue;
  handleExceptionEnd
end;

function GroupBox_GetAnchorSideLeft(AObj: TGroupBox): TAnchorSide; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.AnchorSideLeft;
  handleExceptionEnd
end;

procedure GroupBox_SetAnchorSideLeft(AObj: TGroupBox; AValue: TAnchorSide); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorSideLeft := AValue;
  handleExceptionEnd
end;

function GroupBox_GetAnchorSideTop(AObj: TGroupBox): TAnchorSide; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.AnchorSideTop;
  handleExceptionEnd
end;

procedure GroupBox_SetAnchorSideTop(AObj: TGroupBox; AValue: TAnchorSide); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorSideTop := AValue;
  handleExceptionEnd
end;

function GroupBox_GetAnchorSideRight(AObj: TGroupBox): TAnchorSide; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.AnchorSideRight;
  handleExceptionEnd
end;

procedure GroupBox_SetAnchorSideRight(AObj: TGroupBox; AValue: TAnchorSide); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorSideRight := AValue;
  handleExceptionEnd
end;

function GroupBox_GetAnchorSideBottom(AObj: TGroupBox): TAnchorSide; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.AnchorSideBottom;
  handleExceptionEnd
end;

procedure GroupBox_SetAnchorSideBottom(AObj: TGroupBox; AValue: TAnchorSide); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorSideBottom := AValue;
  handleExceptionEnd
end;

function GroupBox_GetChildSizing(AObj: TGroupBox): TControlChildSizing; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ChildSizing;
  handleExceptionEnd
end;

procedure GroupBox_SetChildSizing(AObj: TGroupBox; AValue: TControlChildSizing); extdecl;
begin
  handleExceptionBegin
  AObj.ChildSizing := AValue;
  handleExceptionEnd
end;

function GroupBox_GetBorderSpacing(AObj: TGroupBox): TControlBorderSpacing; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.BorderSpacing;
  handleExceptionEnd
end;

procedure GroupBox_SetBorderSpacing(AObj: TGroupBox; AValue: TControlBorderSpacing); extdecl;
begin
  handleExceptionBegin
  AObj.BorderSpacing := AValue;
  handleExceptionEnd
end;

function GroupBox_GetDockClients(AObj: TGroupBox; Index: Integer): TControl; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.DockClients[Index];
  handleExceptionEnd
end;

function GroupBox_GetControls(AObj: TGroupBox; Index: Integer): TControl; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Controls[Index];
  handleExceptionEnd
end;

function GroupBox_GetComponents(AObj: TGroupBox; AIndex: Integer): TComponent; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Components[AIndex];
  handleExceptionEnd
end;

function GroupBox_GetAnchorSide(AObj: TGroupBox; AKind: TAnchorKind): TAnchorSide; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.AnchorSide[AKind];
  handleExceptionEnd
end;

function GroupBox_StaticClassType: TClass; extdecl;
begin
  Result := TGroupBox;
end;

exports
  GroupBox_Create,
  GroupBox_Free,
  GroupBox_CanFocus,
  GroupBox_ContainsControl,
  GroupBox_ControlAtPos,
  GroupBox_DisableAlign,
  GroupBox_EnableAlign,
  GroupBox_FindChildControl,
  GroupBox_FlipChildren,
  GroupBox_Focused,
  GroupBox_HandleAllocated,
  GroupBox_InsertControl,
  GroupBox_Invalidate,
  GroupBox_PaintTo,
  GroupBox_RemoveControl,
  GroupBox_Realign,
  GroupBox_Repaint,
  GroupBox_ScaleBy,
  GroupBox_ScrollBy,
  GroupBox_SetBounds,
  GroupBox_SetFocus,
  GroupBox_Update,
  GroupBox_BringToFront,
  GroupBox_ClientToScreen,
  GroupBox_ClientToParent,
  GroupBox_Dragging,
  GroupBox_HasParent,
  GroupBox_Hide,
  GroupBox_Perform,
  GroupBox_Refresh,
  GroupBox_ScreenToClient,
  GroupBox_ParentToClient,
  GroupBox_SendToBack,
  GroupBox_Show,
  GroupBox_GetTextBuf,
  GroupBox_GetTextLen,
  GroupBox_SetTextBuf,
  GroupBox_FindComponent,
  GroupBox_GetNamePath,
  GroupBox_Assign,
  GroupBox_ClassType,
  GroupBox_ClassName,
  GroupBox_InstanceSize,
  GroupBox_InheritsFrom,
  GroupBox_Equals,
  GroupBox_GetHashCode,
  GroupBox_ToString,
  GroupBox_AnchorToNeighbour,
  GroupBox_AnchorParallel,
  GroupBox_AnchorHorizontalCenterTo,
  GroupBox_AnchorVerticalCenterTo,
  GroupBox_AnchorSame,
  GroupBox_AnchorAsAlign,
  GroupBox_AnchorClient,
  GroupBox_ScaleDesignToForm,
  GroupBox_ScaleFormToDesign,
  GroupBox_Scale96ToForm,
  GroupBox_ScaleFormTo96,
  GroupBox_Scale96ToFont,
  GroupBox_ScaleFontTo96,
  GroupBox_ScaleScreenToFont,
  GroupBox_ScaleFontToScreen,
  GroupBox_Scale96ToScreen,
  GroupBox_ScaleScreenTo96,
  GroupBox_AutoAdjustLayout,
  GroupBox_FixDesignFontsPPI,
  GroupBox_ScaleFontsPPI,
  GroupBox_GetAlign,
  GroupBox_SetAlign,
  GroupBox_GetAnchors,
  GroupBox_SetAnchors,
  GroupBox_GetBiDiMode,
  GroupBox_SetBiDiMode,
  GroupBox_GetCaption,
  GroupBox_SetCaption,
  GroupBox_GetColor,
  GroupBox_SetColor,
  GroupBox_GetConstraints,
  GroupBox_SetConstraints,
  GroupBox_GetDockSite,
  GroupBox_SetDockSite,
  GroupBox_GetDoubleBuffered,
  GroupBox_SetDoubleBuffered,
  GroupBox_GetDragCursor,
  GroupBox_SetDragCursor,
  GroupBox_GetDragKind,
  GroupBox_SetDragKind,
  GroupBox_GetDragMode,
  GroupBox_SetDragMode,
  GroupBox_GetEnabled,
  GroupBox_SetEnabled,
  GroupBox_GetFont,
  GroupBox_SetFont,
  GroupBox_GetParentBackground,
  GroupBox_SetParentBackground,
  GroupBox_GetParentColor,
  GroupBox_SetParentColor,
  GroupBox_GetParentDoubleBuffered,
  GroupBox_SetParentDoubleBuffered,
  GroupBox_GetParentFont,
  GroupBox_SetParentFont,
  GroupBox_GetParentShowHint,
  GroupBox_SetParentShowHint,
  GroupBox_GetPopupMenu,
  GroupBox_SetPopupMenu,
  GroupBox_GetShowHint,
  GroupBox_SetShowHint,
  GroupBox_GetTabOrder,
  GroupBox_SetTabOrder,
  GroupBox_GetTabStop,
  GroupBox_SetTabStop,
  GroupBox_GetVisible,
  GroupBox_SetVisible,
  GroupBox_SetOnAlignPosition,
  GroupBox_SetOnClick,
  GroupBox_SetOnContextPopup,
  GroupBox_SetOnDblClick,
  GroupBox_SetOnDragDrop,
  GroupBox_SetOnDockDrop,
  GroupBox_SetOnDragOver,
  GroupBox_SetOnEndDock,
  GroupBox_SetOnEndDrag,
  GroupBox_SetOnEnter,
  GroupBox_SetOnExit,
  GroupBox_SetOnGetSiteInfo,
  GroupBox_SetOnMouseDown,
  GroupBox_SetOnMouseEnter,
  GroupBox_SetOnMouseLeave,
  GroupBox_SetOnMouseMove,
  GroupBox_SetOnMouseUp,
  GroupBox_SetOnStartDock,
  GroupBox_SetOnUnDock,
  GroupBox_GetDockClientCount,
  GroupBox_GetMouseInClient,
  GroupBox_GetVisibleDockClientCount,
  GroupBox_GetBrush,
  GroupBox_GetControlCount,
  GroupBox_GetHandle,
  GroupBox_GetParentWindow,
  GroupBox_SetParentWindow,
  GroupBox_GetShowing,
  GroupBox_GetUseDockManager,
  GroupBox_SetUseDockManager,
  GroupBox_GetAction,
  GroupBox_SetAction,
  GroupBox_GetBoundsRect,
  GroupBox_SetBoundsRect,
  GroupBox_GetClientHeight,
  GroupBox_SetClientHeight,
  GroupBox_GetClientOrigin,
  GroupBox_GetClientRect,
  GroupBox_GetClientWidth,
  GroupBox_SetClientWidth,
  GroupBox_GetControlState,
  GroupBox_SetControlState,
  GroupBox_GetControlStyle,
  GroupBox_SetControlStyle,
  GroupBox_GetFloating,
  GroupBox_GetParent,
  GroupBox_SetParent,
  GroupBox_GetLeft,
  GroupBox_SetLeft,
  GroupBox_GetTop,
  GroupBox_SetTop,
  GroupBox_GetWidth,
  GroupBox_SetWidth,
  GroupBox_GetHeight,
  GroupBox_SetHeight,
  GroupBox_GetCursor,
  GroupBox_SetCursor,
  GroupBox_GetHint,
  GroupBox_SetHint,
  GroupBox_GetComponentCount,
  GroupBox_GetComponentIndex,
  GroupBox_SetComponentIndex,
  GroupBox_GetOwner,
  GroupBox_GetName,
  GroupBox_SetName,
  GroupBox_GetTag,
  GroupBox_SetTag,
  GroupBox_GetAnchorSideLeft,
  GroupBox_SetAnchorSideLeft,
  GroupBox_GetAnchorSideTop,
  GroupBox_SetAnchorSideTop,
  GroupBox_GetAnchorSideRight,
  GroupBox_SetAnchorSideRight,
  GroupBox_GetAnchorSideBottom,
  GroupBox_SetAnchorSideBottom,
  GroupBox_GetChildSizing,
  GroupBox_SetChildSizing,
  GroupBox_GetBorderSpacing,
  GroupBox_SetBorderSpacing,
  GroupBox_GetDockClients,
  GroupBox_GetControls,
  GroupBox_GetComponents,
  GroupBox_GetAnchorSide,
  GroupBox_StaticClassType;

