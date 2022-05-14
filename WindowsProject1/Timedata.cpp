#include "Timedata.h"
TimeData::TimeData(SYSTEMTIME time)
{
    fHours = time.wHour / 10;
    sHours = time.wHour % 10;
    fMin = time.wMinute / 10;
    sMin = time.wMinute % 10;
    fSec = time.wSecond / 10;
    sSec = time.wSecond % 10;
}