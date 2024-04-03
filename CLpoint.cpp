#include "CLpoint.h"

CLpoint::CLpoint(){
    this -> x;
    this -> y;
    this -> z;
}

string CLpoint::afficherCoordo()
{
    string texte = "Les coordonees du point en 2D sont x = " + x + "et y = " + y;
    return texte;
}