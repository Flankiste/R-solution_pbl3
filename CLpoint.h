#pragma once
#include "pch.h"

class CLpoint
{
protected:
    double x, y, z;

public:
    CLpoint();
    CLpoint(float x, float y);
    virtual string afficherCoordo();
};
