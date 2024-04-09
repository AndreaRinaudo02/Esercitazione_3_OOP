#include "ComplexNumber.hpp"

namespace ComplexLibrary
{

complex complex::coniugato()
{
    return complex(intera,-immaginaria);
}

ostream& operator<<(ostream& os, const complex &c)
{
    if (c.intera != 0)
    {
        if (c.immaginaria > 0)
        {
            os << c.intera << "+" << c.immaginaria<<"i";
        }

        else if (c.immaginaria < 0)
        {
            os << c.intera << c.immaginaria<<"i";
        }

        else
        {
            os << c.intera;
        }
    }

    else
    {
        if (c.immaginaria != 0)
        {
            os << c.immaginaria << "i";
        }
        else
        {
        os << 0;
        }
    }
    return os;
}

bool operator ==(const complex &c1, const complex &c2)
{
    if (c1.intera == c2.intera && c1.immaginaria == c2.immaginaria)
    {
        return true;
    }
    else
    {
        return false;
    }
}

complex operator+(const complex &c1, const complex &c2)
{
    return complex(c1.intera + c2.intera, c1.immaginaria + c2.immaginaria);
}

}
