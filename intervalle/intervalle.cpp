// intervalle.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Intervalle.h"
math::Intervalle::Intervalle(double a, double b)
{
    if (a < b) {
        this->minimum = a;
        this->maximum = b;
    }
    else {
        this->minimum = b;
        this->maximum = a;
    }
    

}

double math::Intervalle::min()
{
    return this->minimum;
}

double math::Intervalle::max()
{
    return this->maximum;
}

bool math::Intervalle::operator[](double m)
{
    //ahrrass bonjour
       //safhjdgfhdfsdf
    if(m<=this->maximum && m>=this->minimum)
    return true;
    return false;
}
