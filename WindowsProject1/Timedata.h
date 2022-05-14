#pragma once
#include "framework.h"
class TimeData
{
public:
    TimeData() {};
    TimeData(SYSTEMTIME time);
    ~TimeData() {};
    int getfHours() { return fHours; }
    int getsHours() { return sHours; }
    int getfMin() {  return fMin;   }
    int getsMin() { return sMin; }
    int getfSec() { return fSec; }
    int getsSec() { return sSec; }
private:
    int fHours=0;
    int sHours=0;
    int fMin=0;
    int sMin=0;
    int fSec=0;
    int sSec=0;
};

