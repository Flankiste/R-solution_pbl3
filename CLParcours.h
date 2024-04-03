#pragma once
#include "pch.h"

class CLparcours
{
    public:
    CLparcours();
    CLparcours(double);

    virtual void ajouterPoint();
    virtual float calculDistance();
    virtual string message();
};