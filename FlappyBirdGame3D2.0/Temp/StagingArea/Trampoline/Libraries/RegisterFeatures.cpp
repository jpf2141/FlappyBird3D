
#include "RegisterFeatures.h"

extern bool gEnableGyroscope;
extern bool gEnableStylusTouch;

void RegisterFeatures()
{
    gEnableGyroscope = true;
    gEnableStylusTouch = false;
}

