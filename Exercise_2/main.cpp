#include <iostream>
#include <cmath>
#include "src/ComplexNumber.hpp"


int main()
{
    using namespace std;
    using namespace ComplexLibrary;

    complex c1 (2,4);             // Si propongono dei valori per testare il programma
    complex c2 (-2,-4);
    complex c3 (2,4);

    // Si propongono degli esempi per testare il funzionamento degli operatori +, == e la funzione coniugato.

    cout << "Il numero c1 vale: " << (c1) << "   ---   Il suo coniugato vale: " << c1.coniugato() << endl;
    cout << endl;
    cout << "Il numero c2 vale: " << (c2) << "   ---   Il suo coniugato vale: " << c2.coniugato() << endl;
    cout << endl;
    cout << "Il numero c3 vale: " << (c3) << "   ---   Il suo coniugato vale: " << c3.coniugato() << endl;
    cout << endl;
    cout << "La somma tra c1 e c2 vale: " << (c1 + c2) << endl;
    cout << endl;
    cout << "La somma tra c1 e c3 vale: " << (c1 + c3) << endl;
    cout << endl;
    cout << "La somma tra il coniugato di c1 e c2 vale: " << (c1.coniugato() + c2) << endl;
    cout << endl;
    cout << "La somma tra c1 e il coniugato di c3 vale: " << (c1 + c3.coniugato()) << endl;
    cout << endl;

    if (c1 == c2)
    {
        cout << "c1 e c2 sono uguali" << endl;
    }

    else
    {
        cout << "c1 e c2 sono diversi" << endl;
    }

    cout << endl;

    if (c1 == c3)
    {
        cout << "c1 e c3 sono uguali" << endl;
    }

    else
    {
        cout << "c1 e c3 sono diversi" << endl;
    }

    cout << endl;

    if (c3 == c2)
    {
        cout << "c2 e c3 sono uguali" << endl;
    }

    else
    {
        cout << "c2 e c3 sono diversi" << endl;
    }


    return 0;
}
