#include "pch.h"

string CLpoint3D::afficherCoordo()
{
    string texte = "Les coordonees du point en 3D sont x = " + this->x + ", y = " + this->y + "et z = " + this->z;
    return texte;
}