#include "pch.h"

class CLpoint3D:public CLpoint
{
protected:

    double z;

public:
    CLpoint3D();
    CLpoint3D(double, double, double);
    virtual string afficherCoordo();

};