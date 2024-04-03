#include "pch.h"

class CLparcours3D:public CLparcours
{
    private:

    int nbPoints;
    
    public:
    CLparcours3D(int nbPoints_val) : nbPoints(nbPoints_val) {}
    virtual void ajouterPoint();
    virtual float calculDistance();
    virtual string message();
}