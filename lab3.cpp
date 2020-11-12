#include <iostream>

class Figura
{
private:
    double pole = 0;
public:
    setFig();
    getFig();
};

class Kolo : Figura
{
private:
    double r = 0;
public:
    Kolo(double r);
    
    Kolo::Kolo(double r)
   {
        pole = pi*r^2;
   }
};

class Kwadrat : Figura
{
private:
    double a = 0;
public:
    Kwadrat(double a);
    
    Kwadrat::Kwadrat(double a)
   {
        pole = a*a;
   }
};

int main()
{
    Kolo ko1(3);
    Kolo ko2(4);
    Kwadrat kw1(3);
    Kwadrat kw2(4);
}
