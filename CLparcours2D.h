#include "pch.h"

class CLparcours2D:public CLparcours
{
    private:

    int nbPoints;
    
    public:
    CLparcours2D(int nbPoints_val) : nbPoints(nbPoints_val) {}
    virtual void ajouterPoint();
    virtual float calculDistance();
    virtual string message();
}