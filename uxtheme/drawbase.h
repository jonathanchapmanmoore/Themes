//---------------------------------------------------------------------------
//    drawbase.h - base class for draw objects
//---------------------------------------------------------------------------
#pragma once

//---------------------------------------------------------------------------
class CRenderObj;       // forward
//---------------------------------------------------------------------------
class CDrawBase
{
public:
    //---- data ----
    BGTYPE _eBgType;              // all draw objects must start with this
};
//---------------------------------------------------------------------------