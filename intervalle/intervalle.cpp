// intervalle.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Intervalle.h"
using namespace std;
using namespace math;
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
    if(m<=this->maximum && m>=this->minimum)
    return true;
    return false;
}

void math::Intervalle::consulter()
{
    cout << "[" << this->minimum << "," << this->maximum << "]" << endl;
}

Intervalle* math::Intervalle::operator+(Intervalle& z)
{
    double mi, ma;
    if (this->minimum < z.minimum)
        mi = this->minimum;
    else mi = z.minimum;
    if (this->maximum > z.maximum)
        ma = this->maximum;
    else ma = z.maximum;
    Intervalle *a = new Intervalle(mi,ma);

    return a;
}

Intervalle* math::Intervalle::operator-(Intervalle& z)
{
    double mi, ma;
    if (this->minimum > z.minimum) mi = this->minimum;
    else mi = z.minimum;
    if (this->maximum < z.maximum) ma = this->maximum;
    else ma = z.maximum;
    Intervalle* a = new Intervalle(mi, ma);
    return a;
}


