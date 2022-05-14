#pragma once
#include "framework.h"
#include "PloygonStructure.h"
#include "Timedata.h"
#define PADDING 2
#define FULL_WIDTH 2*TRIANGLE_HEIGHT+ SQUARE_WIDTH
class SevenSegment
{
public:
    SevenSegment();
    SevenSegment(int x, int y);
    ~SevenSegment();
    void PrintSevenSegment(HDC hdc,int time);

private:
    int _ax;
    int _ay;
    // 가로 
    HorizontalPolygonStructure _a;
    HorizontalPolygonStructure _g;
    HorizontalPolygonStructure _d;
    //세로
    VerticalPolygonStructure _f;
    VerticalPolygonStructure _b;
    VerticalPolygonStructure _e;
    VerticalPolygonStructure _c;
    
};
