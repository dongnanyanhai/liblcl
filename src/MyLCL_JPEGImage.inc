
//----------------------------------------
// The code is automatically generated by the GenlibLcl tool.
// Copyright © ying32. All Rights Reserved.
// 
// Licensed under Lazarus.modifiedLGPL
//
//----------------------------------------

function JPEGImage_Create: TJPEGImage; extdecl;
begin
  handleExceptionBegin
  Result :=  TJPEGImage.Create;
  handleExceptionEnd
end;

procedure JPEGImage_Free(AObj: TJPEGImage); extdecl;
begin
  handleExceptionBegin
  AObj.Free;
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure JPEGImage_Assign(AObj: TJPEGImage; Source: TPersistent); extdecl;
begin
  handleExceptionBegin
  AObj.Assign(Source);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure JPEGImage_LoadFromStream(AObj: TJPEGImage; Stream: TStream); extdecl;
begin
  handleExceptionBegin
  AObj.LoadFromStream(Stream);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure JPEGImage_SaveToStream(AObj: TJPEGImage; Stream: TStream); extdecl;
begin
  handleExceptionBegin
  AObj.SaveToStream(Stream);
  handleExceptionEnd
end;

//CLASSMETHOD:
function JPEGImage_Equals(AObj: TJPEGImage; Obj: TObject): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Equals(Obj);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure JPEGImage_LoadFromFile(AObj: TJPEGImage; Filename: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.LoadFromFile(Filename);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure JPEGImage_SaveToFile(AObj: TJPEGImage; Filename: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.SaveToFile(Filename);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure JPEGImage_SetSize(AObj: TJPEGImage; AWidth: Integer; AHeight: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.SetSize(AWidth, AHeight);
  handleExceptionEnd
end;

//CLASSMETHOD:
function JPEGImage_GetNamePath(AObj: TJPEGImage): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  PChar(AObj.GetNamePath);
  handleExceptionEnd
end;

//CLASSMETHOD:
function JPEGImage_ClassType(AObj: TJPEGImage): TClass; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ClassType;
  handleExceptionEnd
end;

//CLASSMETHOD:
function JPEGImage_ClassName(AObj: TJPEGImage): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  ToPChar(AObj.ClassName);
  handleExceptionEnd
end;

//CLASSMETHOD:
function JPEGImage_InstanceSize(AObj: TJPEGImage): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.InstanceSize;
  handleExceptionEnd
end;

//CLASSMETHOD:
function JPEGImage_InheritsFrom(AObj: TJPEGImage; AClass: TClass): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.InheritsFrom(AClass);
  handleExceptionEnd
end;

//CLASSMETHOD:
function JPEGImage_GetHashCode(AObj: TJPEGImage): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.GetHashCode;
  handleExceptionEnd
end;

//CLASSMETHOD:
function JPEGImage_ToString(AObj: TJPEGImage): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  PChar(AObj.ToString);
  handleExceptionEnd
end;

function JPEGImage_GetPixelFormat(AObj: TJPEGImage): TPixelFormat; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.PixelFormat;
  handleExceptionEnd
end;

procedure JPEGImage_SetPixelFormat(AObj: TJPEGImage; AValue: TJPEGPixelFormat); extdecl;
begin
  handleExceptionBegin
  AObj.PixelFormat := AValue;
  handleExceptionEnd
end;

function JPEGImage_GetPerformance(AObj: TJPEGImage): TJPEGPerformance; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Performance;
  handleExceptionEnd
end;

procedure JPEGImage_SetPerformance(AObj: TJPEGImage; AValue: TJPEGPerformance); extdecl;
begin
  handleExceptionBegin
  AObj.Performance := AValue;
  handleExceptionEnd
end;

function JPEGImage_GetCanvas(AObj: TJPEGImage): TCanvas; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Canvas;
  handleExceptionEnd
end;

function JPEGImage_GetEmpty(AObj: TJPEGImage): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Empty;
  handleExceptionEnd
end;

function JPEGImage_GetHeight(AObj: TJPEGImage): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Height;
  handleExceptionEnd
end;

procedure JPEGImage_SetHeight(AObj: TJPEGImage; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Height := AValue;
  handleExceptionEnd
end;

function JPEGImage_GetModified(AObj: TJPEGImage): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Modified;
  handleExceptionEnd
end;

procedure JPEGImage_SetModified(AObj: TJPEGImage; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.Modified := AValue;
  handleExceptionEnd
end;

function JPEGImage_GetPalette(AObj: TJPEGImage): HPALETTE; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Palette;
  handleExceptionEnd
end;

procedure JPEGImage_SetPalette(AObj: TJPEGImage; AValue: HPALETTE); extdecl;
begin
  handleExceptionBegin
  AObj.Palette := AValue;
  handleExceptionEnd
end;

function JPEGImage_GetPaletteModified(AObj: TJPEGImage): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.PaletteModified;
  handleExceptionEnd
end;

procedure JPEGImage_SetPaletteModified(AObj: TJPEGImage; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.PaletteModified := AValue;
  handleExceptionEnd
end;

function JPEGImage_GetTransparent(AObj: TJPEGImage): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Transparent;
  handleExceptionEnd
end;

procedure JPEGImage_SetTransparent(AObj: TJPEGImage; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.Transparent := AValue;
  handleExceptionEnd
end;

function JPEGImage_GetWidth(AObj: TJPEGImage): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Width;
  handleExceptionEnd
end;

procedure JPEGImage_SetWidth(AObj: TJPEGImage; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Width := AValue;
  handleExceptionEnd
end;

//EVENT_TYPE:TNotifyEvent
procedure JPEGImage_SetOnChange(AObj: TJPEGImage; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnChange}
  EventMethodCode
end;

function JPEGImage_StaticClassType: TClass; extdecl;
begin
  Result := TJPEGImage;
end;

exports
  JPEGImage_Create,
  JPEGImage_Free,
  JPEGImage_Assign,
  JPEGImage_LoadFromStream,
  JPEGImage_SaveToStream,
  JPEGImage_Equals,
  JPEGImage_LoadFromFile,
  JPEGImage_SaveToFile,
  JPEGImage_SetSize,
  JPEGImage_GetNamePath,
  JPEGImage_ClassType,
  JPEGImage_ClassName,
  JPEGImage_InstanceSize,
  JPEGImage_InheritsFrom,
  JPEGImage_GetHashCode,
  JPEGImage_ToString,
  JPEGImage_GetPixelFormat,
  JPEGImage_SetPixelFormat,
  JPEGImage_GetPerformance,
  JPEGImage_SetPerformance,
  JPEGImage_GetCanvas,
  JPEGImage_GetEmpty,
  JPEGImage_GetHeight,
  JPEGImage_SetHeight,
  JPEGImage_GetModified,
  JPEGImage_SetModified,
  JPEGImage_GetPalette,
  JPEGImage_SetPalette,
  JPEGImage_GetPaletteModified,
  JPEGImage_SetPaletteModified,
  JPEGImage_GetTransparent,
  JPEGImage_SetTransparent,
  JPEGImage_GetWidth,
  JPEGImage_SetWidth,
  JPEGImage_SetOnChange,
  JPEGImage_StaticClassType;

