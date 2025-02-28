
//----------------------------------------
// The code is automatically generated by the GenlibLcl tool.
// Copyright © ying32. All Rights Reserved.
// 
// Licensed under Lazarus.modifiedLGPL
//
//----------------------------------------

function XButton_Create(AOwner: TComponent): TXButton; extdecl;
begin
  handleExceptionBegin
  Result :=  TXButton.Create(AOwner);
  handleExceptionEnd
end;

procedure XButton_Free(AObj: TXButton); extdecl;
begin
  handleExceptionBegin
  AObj.Free;
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure XButton_BringToFront(AObj: TXButton); extdecl;
begin
  handleExceptionBegin
  AObj.BringToFront;
  handleExceptionEnd
end;

//CLASSMETHOD:
//RETURNISLASTPARAM:
//PARAMS:2=nonPtr
procedure XButton_ClientToScreen(AObj: TXButton; var Point: TPoint; var Result: TPoint); extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ClientToScreen(Point);
  handleExceptionEnd
end;

//CLASSMETHOD:
//RETURNISLASTPARAM:
//PARAMS:2=nonPtr
procedure XButton_ClientToParent(AObj: TXButton; var Point: TPoint; AParent: TWinControl; var Result: TPoint); extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ClientToParent(Point, AParent);
  handleExceptionEnd
end;

//CLASSMETHOD:
function XButton_Dragging(AObj: TXButton): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Dragging;
  handleExceptionEnd
end;

//CLASSMETHOD:
function XButton_HasParent(AObj: TXButton): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.HasParent;
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure XButton_Hide(AObj: TXButton); extdecl;
begin
  handleExceptionBegin
  AObj.Hide;
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure XButton_Invalidate(AObj: TXButton); extdecl;
begin
  handleExceptionBegin
  AObj.Invalidate;
  handleExceptionEnd
end;

//CLASSMETHOD:
function XButton_Perform(AObj: TXButton; Msg: Cardinal; WParam: NativeUInt; LParam: NativeInt): NativeInt; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Perform(Msg, WParam, LParam);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure XButton_Refresh(AObj: TXButton); extdecl;
begin
  handleExceptionBegin
  AObj.Refresh;
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure XButton_Repaint(AObj: TXButton); extdecl;
begin
  handleExceptionBegin
  AObj.Repaint;
  handleExceptionEnd
end;

//CLASSMETHOD:
//RETURNISLASTPARAM:
//PARAMS:2=nonPtr
procedure XButton_ScreenToClient(AObj: TXButton; var Point: TPoint; var Result: TPoint); extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ScreenToClient(Point);
  handleExceptionEnd
end;

//CLASSMETHOD:
//RETURNISLASTPARAM:
//PARAMS:2=nonPtr
procedure XButton_ParentToClient(AObj: TXButton; var Point: TPoint; AParent: TWinControl; var Result: TPoint); extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ParentToClient(Point, AParent);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure XButton_SendToBack(AObj: TXButton); extdecl;
begin
  handleExceptionBegin
  AObj.SendToBack;
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure XButton_SetBounds(AObj: TXButton; ALeft: Integer; ATop: Integer; AWidth: Integer; AHeight: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.SetBounds(ALeft, ATop, AWidth, AHeight);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure XButton_Show(AObj: TXButton); extdecl;
begin
  handleExceptionBegin
  AObj.Show;
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure XButton_Update(AObj: TXButton); extdecl;
begin
  handleExceptionBegin
  AObj.Update;
  handleExceptionEnd
end;

//CLASSMETHOD:
function XButton_GetTextBuf(AObj: TXButton; Buffer: PChar; BufSize: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.GetTextBuf(Buffer, BufSize);
  handleExceptionEnd
end;

//CLASSMETHOD:
function XButton_GetTextLen(AObj: TXButton): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  {$ifdef darwin}Length(AObj.Caption){$else}AObj.GetTextLen{$endif};
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure XButton_SetTextBuf(AObj: TXButton; Buffer: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.SetTextBuf(Buffer);
  handleExceptionEnd
end;

//CLASSMETHOD:
function XButton_FindComponent(AObj: TXButton; AName: PChar): TComponent; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.FindComponent(AName);
  handleExceptionEnd
end;

//CLASSMETHOD:
function XButton_GetNamePath(AObj: TXButton): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  PChar(AObj.GetNamePath);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure XButton_Assign(AObj: TXButton; Source: TPersistent); extdecl;
begin
  handleExceptionBegin
  AObj.Assign(Source);
  handleExceptionEnd
end;

//CLASSMETHOD:
function XButton_ClassType(AObj: TXButton): TClass; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ClassType;
  handleExceptionEnd
end;

//CLASSMETHOD:
function XButton_ClassName(AObj: TXButton): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  ToPChar(AObj.ClassName);
  handleExceptionEnd
end;

//CLASSMETHOD:
function XButton_InstanceSize(AObj: TXButton): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.InstanceSize;
  handleExceptionEnd
end;

//CLASSMETHOD:
function XButton_InheritsFrom(AObj: TXButton; AClass: TClass): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.InheritsFrom(AClass);
  handleExceptionEnd
end;

//CLASSMETHOD:
function XButton_Equals(AObj: TXButton; Obj: TObject): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Equals(Obj);
  handleExceptionEnd
end;

//CLASSMETHOD:
function XButton_GetHashCode(AObj: TXButton): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.GetHashCode;
  handleExceptionEnd
end;

//CLASSMETHOD:
function XButton_ToString(AObj: TXButton): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  PChar(AObj.ToString);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure XButton_AnchorToNeighbour(AObj: TXButton; ASide: TAnchorKind; ASpace: Integer; ASibling: TControl); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorToNeighbour(ASide, ASpace, ASibling);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure XButton_AnchorParallel(AObj: TXButton; ASide: TAnchorKind; ASpace: Integer; ASibling: TControl); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorParallel(ASide, ASpace, ASibling);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure XButton_AnchorHorizontalCenterTo(AObj: TXButton; ASibling: TControl); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorHorizontalCenterTo(ASibling);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure XButton_AnchorVerticalCenterTo(AObj: TXButton; ASibling: TControl); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorVerticalCenterTo(ASibling);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure XButton_AnchorSame(AObj: TXButton; ASide: TAnchorKind; ASibling: TControl); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorSame(ASide, ASibling);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure XButton_AnchorAsAlign(AObj: TXButton; ATheAlign: TAlign; ASpace: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorAsAlign(ATheAlign, ASpace);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure XButton_AnchorClient(AObj: TXButton; ASpace: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorClient(ASpace);
  handleExceptionEnd
end;

//CLASSMETHOD:
function XButton_ScaleDesignToForm(AObj: TXButton; ASize: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ScaleDesignToForm(ASize);
  handleExceptionEnd
end;

//CLASSMETHOD:
function XButton_ScaleFormToDesign(AObj: TXButton; ASize: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ScaleFormToDesign(ASize);
  handleExceptionEnd
end;

//CLASSMETHOD:
function XButton_Scale96ToForm(AObj: TXButton; ASize: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Scale96ToForm(ASize);
  handleExceptionEnd
end;

//CLASSMETHOD:
function XButton_ScaleFormTo96(AObj: TXButton; ASize: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ScaleFormTo96(ASize);
  handleExceptionEnd
end;

//CLASSMETHOD:
function XButton_Scale96ToFont(AObj: TXButton; ASize: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Scale96ToFont(ASize);
  handleExceptionEnd
end;

//CLASSMETHOD:
function XButton_ScaleFontTo96(AObj: TXButton; ASize: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ScaleFontTo96(ASize);
  handleExceptionEnd
end;

//CLASSMETHOD:
function XButton_ScaleScreenToFont(AObj: TXButton; ASize: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ScaleScreenToFont(ASize);
  handleExceptionEnd
end;

//CLASSMETHOD:
function XButton_ScaleFontToScreen(AObj: TXButton; ASize: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ScaleFontToScreen(ASize);
  handleExceptionEnd
end;

//CLASSMETHOD:
function XButton_Scale96ToScreen(AObj: TXButton; ASize: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Scale96ToScreen(ASize);
  handleExceptionEnd
end;

//CLASSMETHOD:
function XButton_ScaleScreenTo96(AObj: TXButton; ASize: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ScaleScreenTo96(ASize);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure XButton_AutoAdjustLayout(AObj: TXButton; AMode: TLayoutAdjustmentPolicy; AFromPPI: Integer; AToPPI: Integer; AOldFormWidth: Integer; ANewFormWidth: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.AutoAdjustLayout(AMode, AFromPPI, AToPPI, AOldFormWidth, ANewFormWidth);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure XButton_FixDesignFontsPPI(AObj: TXButton; ADesignTimePPI: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.FixDesignFontsPPI(ADesignTimePPI);
  handleExceptionEnd
end;

//CLASSMETHOD:
//PARAMS:3=nonPtr
procedure XButton_ScaleFontsPPI(AObj: TXButton; AToPPI: Integer; var AProportion: Double); extdecl;
begin
  handleExceptionBegin
  AObj.ScaleFontsPPI(AToPPI, AProportion);
  handleExceptionEnd
end;

function XButton_GetCaption(AObj: TXButton): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  PChar(AObj.Caption);
  handleExceptionEnd
end;

procedure XButton_SetCaption(AObj: TXButton; AValue: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.Caption := AValue;
  handleExceptionEnd
end;

function XButton_GetShowCaption(AObj: TXButton): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ShowCaption;
  handleExceptionEnd
end;

procedure XButton_SetShowCaption(AObj: TXButton; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.ShowCaption := AValue;
  handleExceptionEnd
end;

function XButton_GetBackColor(AObj: TXButton): TColor; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.BackColor;
  handleExceptionEnd
end;

procedure XButton_SetBackColor(AObj: TXButton; AValue: TColor); extdecl;
begin
  handleExceptionBegin
  AObj.BackColor := AValue;
  handleExceptionEnd
end;

function XButton_GetHoverColor(AObj: TXButton): TColor; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.HoverColor;
  handleExceptionEnd
end;

procedure XButton_SetHoverColor(AObj: TXButton; AValue: TColor); extdecl;
begin
  handleExceptionBegin
  AObj.HoverColor := AValue;
  handleExceptionEnd
end;

function XButton_GetDownColor(AObj: TXButton): TColor; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.DownColor;
  handleExceptionEnd
end;

procedure XButton_SetDownColor(AObj: TXButton; AValue: TColor); extdecl;
begin
  handleExceptionBegin
  AObj.DownColor := AValue;
  handleExceptionEnd
end;

function XButton_GetBorderWidth(AObj: TXButton): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.BorderWidth;
  handleExceptionEnd
end;

procedure XButton_SetBorderWidth(AObj: TXButton; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.BorderWidth := AValue;
  handleExceptionEnd
end;

function XButton_GetBorderColor(AObj: TXButton): TColor; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.BorderColor;
  handleExceptionEnd
end;

procedure XButton_SetBorderColor(AObj: TXButton; AValue: TColor); extdecl;
begin
  handleExceptionBegin
  AObj.BorderColor := AValue;
  handleExceptionEnd
end;

function XButton_GetPicture(AObj: TXButton): TPicture; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Picture;
  handleExceptionEnd
end;

procedure XButton_SetPicture(AObj: TXButton; AValue: TPicture); extdecl;
begin
  handleExceptionBegin
  AObj.Picture := AValue;
  handleExceptionEnd
end;

function XButton_GetDrawMode(AObj: TXButton): TDrawImageMode; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.DrawMode;
  handleExceptionEnd
end;

procedure XButton_SetDrawMode(AObj: TXButton; AValue: TDrawImageMode); extdecl;
begin
  handleExceptionBegin
  AObj.DrawMode := AValue;
  handleExceptionEnd
end;

function XButton_GetNormalFontColor(AObj: TXButton): TColor; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.NormalFontColor;
  handleExceptionEnd
end;

procedure XButton_SetNormalFontColor(AObj: TXButton; AValue: TColor); extdecl;
begin
  handleExceptionBegin
  AObj.NormalFontColor := AValue;
  handleExceptionEnd
end;

function XButton_GetDownFontColor(AObj: TXButton): TColor; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.DownFontColor;
  handleExceptionEnd
end;

procedure XButton_SetDownFontColor(AObj: TXButton; AValue: TColor); extdecl;
begin
  handleExceptionBegin
  AObj.DownFontColor := AValue;
  handleExceptionEnd
end;

function XButton_GetHoverFontColor(AObj: TXButton): TColor; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.HoverFontColor;
  handleExceptionEnd
end;

procedure XButton_SetHoverFontColor(AObj: TXButton; AValue: TColor); extdecl;
begin
  handleExceptionBegin
  AObj.HoverFontColor := AValue;
  handleExceptionEnd
end;

function XButton_GetAction(AObj: TXButton): TBasicAction; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Action;
  handleExceptionEnd
end;

procedure XButton_SetAction(AObj: TXButton; AValue: TBasicAction); extdecl;
begin
  handleExceptionBegin
  AObj.Action := AValue;
  handleExceptionEnd
end;

function XButton_GetAlign(AObj: TXButton): TAlign; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Align;
  handleExceptionEnd
end;

procedure XButton_SetAlign(AObj: TXButton; AValue: TAlign); extdecl;
begin
  handleExceptionBegin
  AObj.Align := AValue;
  handleExceptionEnd
end;

function XButton_GetAnchors(AObj: TXButton): TAnchors; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Anchors;
  handleExceptionEnd
end;

procedure XButton_SetAnchors(AObj: TXButton; AValue: TAnchors); extdecl;
begin
  handleExceptionBegin
  AObj.Anchors := AValue;
  handleExceptionEnd
end;

function XButton_GetBiDiMode(AObj: TXButton): TBiDiMode; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.BiDiMode;
  handleExceptionEnd
end;

procedure XButton_SetBiDiMode(AObj: TXButton; AValue: TBiDiMode); extdecl;
begin
  handleExceptionBegin
  AObj.BiDiMode := AValue;
  handleExceptionEnd
end;

function XButton_GetConstraints(AObj: TXButton): TSizeConstraints; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Constraints;
  handleExceptionEnd
end;

procedure XButton_SetConstraints(AObj: TXButton; AValue: TSizeConstraints); extdecl;
begin
  handleExceptionBegin
  AObj.Constraints := AValue;
  handleExceptionEnd
end;

function XButton_GetEnabled(AObj: TXButton): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Enabled;
  handleExceptionEnd
end;

procedure XButton_SetEnabled(AObj: TXButton; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.Enabled := AValue;
  handleExceptionEnd
end;

function XButton_GetFont(AObj: TXButton): TFont; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Font;
  handleExceptionEnd
end;

procedure XButton_SetFont(AObj: TXButton; AValue: TFont); extdecl;
begin
  handleExceptionBegin
  AObj.Font := AValue;
  handleExceptionEnd
end;

function XButton_GetParentFont(AObj: TXButton): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ParentFont;
  handleExceptionEnd
end;

procedure XButton_SetParentFont(AObj: TXButton; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.ParentFont := AValue;
  handleExceptionEnd
end;

function XButton_GetParentShowHint(AObj: TXButton): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ParentShowHint;
  handleExceptionEnd
end;

procedure XButton_SetParentShowHint(AObj: TXButton; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.ParentShowHint := AValue;
  handleExceptionEnd
end;

function XButton_GetPopupMenu(AObj: TXButton): TPopupMenu; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.PopupMenu;
  handleExceptionEnd
end;

procedure XButton_SetPopupMenu(AObj: TXButton; AValue: TPopupMenu); extdecl;
begin
  handleExceptionBegin
  AObj.PopupMenu := AValue;
  handleExceptionEnd
end;

function XButton_GetShowHint(AObj: TXButton): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ShowHint;
  handleExceptionEnd
end;

procedure XButton_SetShowHint(AObj: TXButton; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.ShowHint := AValue;
  handleExceptionEnd
end;

function XButton_GetVisible(AObj: TXButton): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Visible;
  handleExceptionEnd
end;

procedure XButton_SetVisible(AObj: TXButton; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.Visible := AValue;
  handleExceptionEnd
end;

//EVENT_TYPE:TNotifyEvent
procedure XButton_SetOnClick(AObj: TXButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnClick}
  EventMethodCode
end;

//EVENT_TYPE:TNotifyEvent
procedure XButton_SetOnDblClick(AObj: TXButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDblClick}
  EventMethodCode
end;

//EVENT_TYPE:TMouseEvent
procedure XButton_SetOnMouseDown(AObj: TXButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  EventMethodCode
end;

//EVENT_TYPE:TNotifyEvent
procedure XButton_SetOnMouseEnter(AObj: TXButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  EventMethodCode
end;

//EVENT_TYPE:TNotifyEvent
procedure XButton_SetOnMouseLeave(AObj: TXButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  EventMethodCode
end;

//EVENT_TYPE:TMouseMoveEvent
procedure XButton_SetOnMouseMove(AObj: TXButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  EventMethodCode
end;

//EVENT_TYPE:TMouseEvent
procedure XButton_SetOnMouseUp(AObj: TXButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  EventMethodCode
end;

//RETURNISLASTPARAM:
procedure XButton_GetBoundsRect(AObj: TXButton; var Result: TRect); extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.BoundsRect;
  handleExceptionEnd
end;

//PARAMS:2=nonPtr
procedure XButton_SetBoundsRect(AObj: TXButton; var AValue: TRect); extdecl;
begin
  handleExceptionBegin
  AObj.BoundsRect := AValue;
  handleExceptionEnd
end;

function XButton_GetClientHeight(AObj: TXButton): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ClientHeight;
  handleExceptionEnd
end;

procedure XButton_SetClientHeight(AObj: TXButton; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.ClientHeight := AValue;
  handleExceptionEnd
end;

//RETURNISLASTPARAM:
procedure XButton_GetClientOrigin(AObj: TXButton; var Result: TPoint); extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ClientOrigin;
  handleExceptionEnd
end;

//RETURNISLASTPARAM:
procedure XButton_GetClientRect(AObj: TXButton; var Result: TRect); extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ClientRect;
  handleExceptionEnd
end;

function XButton_GetClientWidth(AObj: TXButton): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ClientWidth;
  handleExceptionEnd
end;

procedure XButton_SetClientWidth(AObj: TXButton; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.ClientWidth := AValue;
  handleExceptionEnd
end;

function XButton_GetControlState(AObj: TXButton): TControlState; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ControlState;
  handleExceptionEnd
end;

procedure XButton_SetControlState(AObj: TXButton; AValue: TControlState); extdecl;
begin
  handleExceptionBegin
  AObj.ControlState := AValue;
  handleExceptionEnd
end;

function XButton_GetControlStyle(AObj: TXButton): TControlStyle; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ControlStyle;
  handleExceptionEnd
end;

procedure XButton_SetControlStyle(AObj: TXButton; AValue: TControlStyle); extdecl;
begin
  handleExceptionBegin
  AObj.ControlStyle := AValue;
  handleExceptionEnd
end;

function XButton_GetFloating(AObj: TXButton): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Floating;
  handleExceptionEnd
end;

function XButton_GetParent(AObj: TXButton): TWinControl; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Parent;
  handleExceptionEnd
end;

procedure XButton_SetParent(AObj: TXButton; AValue: TWinControl); extdecl;
begin
  handleExceptionBegin
  AObj.Parent := AValue;
  handleExceptionEnd
end;

function XButton_GetLeft(AObj: TXButton): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Left;
  handleExceptionEnd
end;

procedure XButton_SetLeft(AObj: TXButton; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Left := AValue;
  handleExceptionEnd
end;

function XButton_GetTop(AObj: TXButton): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Top;
  handleExceptionEnd
end;

procedure XButton_SetTop(AObj: TXButton; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Top := AValue;
  handleExceptionEnd
end;

function XButton_GetWidth(AObj: TXButton): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Width;
  handleExceptionEnd
end;

procedure XButton_SetWidth(AObj: TXButton; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Width := AValue;
  handleExceptionEnd
end;

function XButton_GetHeight(AObj: TXButton): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Height;
  handleExceptionEnd
end;

procedure XButton_SetHeight(AObj: TXButton; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Height := AValue;
  handleExceptionEnd
end;

function XButton_GetCursor(AObj: TXButton): TCursor; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Cursor;
  handleExceptionEnd
end;

procedure XButton_SetCursor(AObj: TXButton; AValue: TCursor); extdecl;
begin
  handleExceptionBegin
  AObj.Cursor := AValue;
  handleExceptionEnd
end;

function XButton_GetHint(AObj: TXButton): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  PChar(AObj.Hint);
  handleExceptionEnd
end;

procedure XButton_SetHint(AObj: TXButton; AValue: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.Hint := AValue;
  handleExceptionEnd
end;

function XButton_GetComponentCount(AObj: TXButton): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ComponentCount;
  handleExceptionEnd
end;

function XButton_GetComponentIndex(AObj: TXButton): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ComponentIndex;
  handleExceptionEnd
end;

procedure XButton_SetComponentIndex(AObj: TXButton; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.ComponentIndex := AValue;
  handleExceptionEnd
end;

function XButton_GetOwner(AObj: TXButton): TComponent; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Owner;
  handleExceptionEnd
end;

function XButton_GetName(AObj: TXButton): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  PChar(AObj.Name);
  handleExceptionEnd
end;

procedure XButton_SetName(AObj: TXButton; AValue: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.Name := AValue;
  handleExceptionEnd
end;

function XButton_GetTag(AObj: TXButton): NativeInt; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Tag;
  handleExceptionEnd
end;

procedure XButton_SetTag(AObj: TXButton; AValue: NativeInt); extdecl;
begin
  handleExceptionBegin
  AObj.Tag := AValue;
  handleExceptionEnd
end;

function XButton_GetAnchorSideLeft(AObj: TXButton): TAnchorSide; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.AnchorSideLeft;
  handleExceptionEnd
end;

procedure XButton_SetAnchorSideLeft(AObj: TXButton; AValue: TAnchorSide); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorSideLeft := AValue;
  handleExceptionEnd
end;

function XButton_GetAnchorSideTop(AObj: TXButton): TAnchorSide; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.AnchorSideTop;
  handleExceptionEnd
end;

procedure XButton_SetAnchorSideTop(AObj: TXButton; AValue: TAnchorSide); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorSideTop := AValue;
  handleExceptionEnd
end;

function XButton_GetAnchorSideRight(AObj: TXButton): TAnchorSide; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.AnchorSideRight;
  handleExceptionEnd
end;

procedure XButton_SetAnchorSideRight(AObj: TXButton; AValue: TAnchorSide); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorSideRight := AValue;
  handleExceptionEnd
end;

function XButton_GetAnchorSideBottom(AObj: TXButton): TAnchorSide; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.AnchorSideBottom;
  handleExceptionEnd
end;

procedure XButton_SetAnchorSideBottom(AObj: TXButton; AValue: TAnchorSide); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorSideBottom := AValue;
  handleExceptionEnd
end;

function XButton_GetBorderSpacing(AObj: TXButton): TControlBorderSpacing; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.BorderSpacing;
  handleExceptionEnd
end;

procedure XButton_SetBorderSpacing(AObj: TXButton; AValue: TControlBorderSpacing); extdecl;
begin
  handleExceptionBegin
  AObj.BorderSpacing := AValue;
  handleExceptionEnd
end;

function XButton_GetComponents(AObj: TXButton; AIndex: Integer): TComponent; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Components[AIndex];
  handleExceptionEnd
end;

function XButton_GetAnchorSide(AObj: TXButton; AKind: TAnchorKind): TAnchorSide; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.AnchorSide[AKind];
  handleExceptionEnd
end;

function XButton_StaticClassType: TClass; extdecl;
begin
  Result := TXButton;
end;

exports
  XButton_Create,
  XButton_Free,
  XButton_BringToFront,
  XButton_ClientToScreen,
  XButton_ClientToParent,
  XButton_Dragging,
  XButton_HasParent,
  XButton_Hide,
  XButton_Invalidate,
  XButton_Perform,
  XButton_Refresh,
  XButton_Repaint,
  XButton_ScreenToClient,
  XButton_ParentToClient,
  XButton_SendToBack,
  XButton_SetBounds,
  XButton_Show,
  XButton_Update,
  XButton_GetTextBuf,
  XButton_GetTextLen,
  XButton_SetTextBuf,
  XButton_FindComponent,
  XButton_GetNamePath,
  XButton_Assign,
  XButton_ClassType,
  XButton_ClassName,
  XButton_InstanceSize,
  XButton_InheritsFrom,
  XButton_Equals,
  XButton_GetHashCode,
  XButton_ToString,
  XButton_AnchorToNeighbour,
  XButton_AnchorParallel,
  XButton_AnchorHorizontalCenterTo,
  XButton_AnchorVerticalCenterTo,
  XButton_AnchorSame,
  XButton_AnchorAsAlign,
  XButton_AnchorClient,
  XButton_ScaleDesignToForm,
  XButton_ScaleFormToDesign,
  XButton_Scale96ToForm,
  XButton_ScaleFormTo96,
  XButton_Scale96ToFont,
  XButton_ScaleFontTo96,
  XButton_ScaleScreenToFont,
  XButton_ScaleFontToScreen,
  XButton_Scale96ToScreen,
  XButton_ScaleScreenTo96,
  XButton_AutoAdjustLayout,
  XButton_FixDesignFontsPPI,
  XButton_ScaleFontsPPI,
  XButton_GetCaption,
  XButton_SetCaption,
  XButton_GetShowCaption,
  XButton_SetShowCaption,
  XButton_GetBackColor,
  XButton_SetBackColor,
  XButton_GetHoverColor,
  XButton_SetHoverColor,
  XButton_GetDownColor,
  XButton_SetDownColor,
  XButton_GetBorderWidth,
  XButton_SetBorderWidth,
  XButton_GetBorderColor,
  XButton_SetBorderColor,
  XButton_GetPicture,
  XButton_SetPicture,
  XButton_GetDrawMode,
  XButton_SetDrawMode,
  XButton_GetNormalFontColor,
  XButton_SetNormalFontColor,
  XButton_GetDownFontColor,
  XButton_SetDownFontColor,
  XButton_GetHoverFontColor,
  XButton_SetHoverFontColor,
  XButton_GetAction,
  XButton_SetAction,
  XButton_GetAlign,
  XButton_SetAlign,
  XButton_GetAnchors,
  XButton_SetAnchors,
  XButton_GetBiDiMode,
  XButton_SetBiDiMode,
  XButton_GetConstraints,
  XButton_SetConstraints,
  XButton_GetEnabled,
  XButton_SetEnabled,
  XButton_GetFont,
  XButton_SetFont,
  XButton_GetParentFont,
  XButton_SetParentFont,
  XButton_GetParentShowHint,
  XButton_SetParentShowHint,
  XButton_GetPopupMenu,
  XButton_SetPopupMenu,
  XButton_GetShowHint,
  XButton_SetShowHint,
  XButton_GetVisible,
  XButton_SetVisible,
  XButton_SetOnClick,
  XButton_SetOnDblClick,
  XButton_SetOnMouseDown,
  XButton_SetOnMouseEnter,
  XButton_SetOnMouseLeave,
  XButton_SetOnMouseMove,
  XButton_SetOnMouseUp,
  XButton_GetBoundsRect,
  XButton_SetBoundsRect,
  XButton_GetClientHeight,
  XButton_SetClientHeight,
  XButton_GetClientOrigin,
  XButton_GetClientRect,
  XButton_GetClientWidth,
  XButton_SetClientWidth,
  XButton_GetControlState,
  XButton_SetControlState,
  XButton_GetControlStyle,
  XButton_SetControlStyle,
  XButton_GetFloating,
  XButton_GetParent,
  XButton_SetParent,
  XButton_GetLeft,
  XButton_SetLeft,
  XButton_GetTop,
  XButton_SetTop,
  XButton_GetWidth,
  XButton_SetWidth,
  XButton_GetHeight,
  XButton_SetHeight,
  XButton_GetCursor,
  XButton_SetCursor,
  XButton_GetHint,
  XButton_SetHint,
  XButton_GetComponentCount,
  XButton_GetComponentIndex,
  XButton_SetComponentIndex,
  XButton_GetOwner,
  XButton_GetName,
  XButton_SetName,
  XButton_GetTag,
  XButton_SetTag,
  XButton_GetAnchorSideLeft,
  XButton_SetAnchorSideLeft,
  XButton_GetAnchorSideTop,
  XButton_SetAnchorSideTop,
  XButton_GetAnchorSideRight,
  XButton_SetAnchorSideRight,
  XButton_GetAnchorSideBottom,
  XButton_SetAnchorSideBottom,
  XButton_GetBorderSpacing,
  XButton_SetBorderSpacing,
  XButton_GetComponents,
  XButton_GetAnchorSide,
  XButton_StaticClassType;

