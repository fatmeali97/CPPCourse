#include "Rectangle.h"

Rectangles::Rectangles(int sideA,
    int b,
    string position,
    int size,
    string fill)
    : TwoDemShape(sideA, position, size, fill)
{
    setB(b);
}


void Rectangles::setB(int b)
{
    this->b = b;
}

int Rectangles::getB()
{
    return this->b;
}


double Rectangles::getArea()
{
    return this->getA() * this->getB();
}

void Rectangles::print()
{
    cout << "The rectangle area is:" << getArea() << endl;
}

bool Rectangles::operator < (Rectangles triangle2) 
{
    if (getArea() < triangle2.getArea())
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Rectangles::operator > (Rectangles triangle2)
{
    if (getArea() > triangle2.getArea())
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Rectangles::operator == (Rectangles triangle2)
{
    if (getArea() == triangle2.getArea())
    {
        return true;
    }
    else
    {
        return false;
    }
}