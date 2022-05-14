#pragma once
#include "framework.h"
#define TRIANGLE_HEIGHT 10
#define TRIANGLE_HALF_WIDTH 8
#define SQUARE_WIDTH 110
class HorizontalPolygonStructure
{
public:
    void PloygonMove(int x, int y);
    POINT* getPgon() { return pgon; }
private:
    POINT  pgon[6] = { TRIANGLE_HEIGHT, - TRIANGLE_HALF_WIDTH,0,0, TRIANGLE_HEIGHT, TRIANGLE_HALF_WIDTH,
          TRIANGLE_HEIGHT + SQUARE_WIDTH,  TRIANGLE_HALF_WIDTH, 2 * TRIANGLE_HEIGHT + SQUARE_WIDTH,0, TRIANGLE_HEIGHT + SQUARE_WIDTH, - TRIANGLE_HALF_WIDTH };
};
class VerticalPolygonStructure
{
public:
    void PloygonMove(int x, int y);
    POINT* getPgon() { return pgon; }
private:
    POINT pgon[6] = {   TRIANGLE_HALF_WIDTH,  + TRIANGLE_HEIGHT,0,0, - TRIANGLE_HALF_WIDTH,  TRIANGLE_HEIGHT,
         - TRIANGLE_HALF_WIDTH, + TRIANGLE_HEIGHT + SQUARE_WIDTH,0, + 2 * TRIANGLE_HEIGHT + SQUARE_WIDTH,  TRIANGLE_HALF_WIDTH,  TRIANGLE_HEIGHT + SQUARE_WIDTH };
};
