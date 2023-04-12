#ifndef PVZENTITY_H
#define PVZENTITY_H

#include "PvzObject.h"

class PvzEntity : public PvzObject
{
public:
    PvzEntity();
    int deathFadeTick = 0;
};

#endif // PVZENTITY_H
