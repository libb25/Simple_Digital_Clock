#include "SevenSegment.h"
SevenSegment::SevenSegment() : _ax(0), _ay(0)
{
    
}
SevenSegment::SevenSegment(int x, int y) : _ax(x),_ay(y)
{
    _a.PloygonMove(_ax, _ay);
    _g.PloygonMove(_ax,_ay +FULL_WIDTH + 2 * PADDING);
    _d.PloygonMove(_ax,_ay + 2*(FULL_WIDTH + 2 * PADDING));
    _f.PloygonMove(_ax-PADDING, _ay+PADDING);
    _b.PloygonMove(_ax+FULL_WIDTH+PADDING, _ay+PADDING);
    _e.PloygonMove(_ax - PADDING, _ay + 3* PADDING+FULL_WIDTH);
    _c.PloygonMove(_ax + FULL_WIDTH + PADDING, _ay + 3* PADDING+FULL_WIDTH);

}
SevenSegment::~SevenSegment()
{
    
}
void SevenSegment::PrintSevenSegment(HDC hdc, int time)
{
    switch (time)
    {
    case 1:
        Polygon(hdc, _b.getPgon(), 6);
        Polygon(hdc, _c.getPgon(), 6);
        break;
    case 2:
        Polygon(hdc, _a.getPgon(), 6);
        Polygon(hdc, _b.getPgon(), 6);
        Polygon(hdc, _d.getPgon(), 6);
        Polygon(hdc, _e.getPgon(), 6);
        Polygon(hdc, _g.getPgon(), 6);
        break;
    case 3:
        Polygon(hdc, _a.getPgon(), 6);
        Polygon(hdc, _b.getPgon(), 6);
        Polygon(hdc, _c.getPgon(), 6);
        Polygon(hdc, _d.getPgon(), 6);
        Polygon(hdc, _g.getPgon(), 6);
        break;
    case 4:
        Polygon(hdc, _b.getPgon(), 6);
        Polygon(hdc, _c.getPgon(), 6);
        Polygon(hdc, _f.getPgon(), 6);
        Polygon(hdc, _g.getPgon(), 6);
        break;
    case 5:
        Polygon(hdc, _a.getPgon(), 6);
        Polygon(hdc, _c.getPgon(), 6);
        Polygon(hdc, _d.getPgon(), 6);
        Polygon(hdc, _f.getPgon(), 6);
        Polygon(hdc, _g.getPgon(), 6);
        break;
    case 6:
        Polygon(hdc, _a.getPgon(), 6);
        Polygon(hdc, _c.getPgon(), 6);
        Polygon(hdc, _d.getPgon(), 6);
        Polygon(hdc, _e.getPgon(), 6);
        Polygon(hdc, _f.getPgon(), 6);
        Polygon(hdc, _g.getPgon(), 6);
        break;
    case 7:
        Polygon(hdc, _a.getPgon(), 6);
        Polygon(hdc, _b.getPgon(), 6);
        Polygon(hdc, _c.getPgon(), 6);
        Polygon(hdc, _f.getPgon(), 6);
        break;
    case 8:
        Polygon(hdc, _a.getPgon(), 6);
        Polygon(hdc, _b.getPgon(), 6);
        Polygon(hdc, _c.getPgon(), 6);
        Polygon(hdc, _d.getPgon(), 6);
        Polygon(hdc, _e.getPgon(), 6);
        Polygon(hdc, _f.getPgon(), 6);
        Polygon(hdc, _g.getPgon(), 6);
        break;
    case 9:
        Polygon(hdc, _a.getPgon(), 6);
        Polygon(hdc, _b.getPgon(), 6);
        Polygon(hdc, _c.getPgon(), 6);
        Polygon(hdc, _f.getPgon(), 6);
        Polygon(hdc, _g.getPgon(), 6);
        break;
    case 0:
        Polygon(hdc, _a.getPgon(), 6);
        Polygon(hdc, _b.getPgon(), 6);
        Polygon(hdc, _c.getPgon(), 6);
        Polygon(hdc, _d.getPgon(), 6);
        Polygon(hdc, _e.getPgon(), 6);
        Polygon(hdc, _f.getPgon(), 6);
        break;
    }
}


