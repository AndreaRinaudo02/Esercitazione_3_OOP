#pragma once
#include <iostream>
#include <cmath>

using namespace std;
namespace ComplexLibrary
{

struct complex
{
    double intera;
    double immaginaria;


    complex(double a,double b):
        intera(a),
        immaginaria(b)

    {}
    complex coniugato();

};


bool operator ==(const complex &c1, const complex &c2);
ostream& operator<<(ostream& os, const complex &c);
complex operator+(const complex &c1, const complex &c2);

}
