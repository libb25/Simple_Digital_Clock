#include "PloygonStructure.h"
void HorizontalPolygonStructure::PloygonMove(int x, int y)
{
    for (int i = 0; i < 6; ++i)
    {
        pgon[i].x += x;
        pgon[i].y += y;
    }
}
void VerticalPolygonStructure::PloygonMove(int x, int y)
{
    for (int i = 0; i < 6; ++i)
    {
        pgon[i].x += x;
        pgon[i].y += y;
    }
}
