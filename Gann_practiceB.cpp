// Kori Gann
// October 1, 2015
//Lots of string functions 

#include <iostream>
#include <cassert>
#include <cstring>

using namespace std;

double feetToInches(double val);
void  feetToInches(double&  val);

double computeRectangle(double valA, double valB);
void computerArea (double valA, double valB, double& valC);

void computerArea (double valA, double valB, double& valArea, double& valPerimeter);

void  stats(double valA, double valB, double valC, double valD, double& valE, double& valF);

void calcAreaPerimeter(double radius, double& area, double& perimeter);

double calcArea(double length, double width);
int main ()

{
   
  
    return 0;

}


double feetToInches(double val)
{
    return (val * 12);
}
void  feetToInches(double&  val)
{
    int a;
    cout << "How many feet?";
    cin >> a;
    val = a * 12;
    return;
}

double computeRectangle(double valA, double valB)
{
    return (valA * valB);
}
void computerArea (double valA, double valB, double& valC)
{
    valC = valA * valB;
    return;
}

void computerArea (double valA, double valB, double& valArea, double& valPerimeter)
{
    valArea = valA * valB;
    valPerimeter = (valA *2) + (valB*2);
    return;
}

void  stats(double valA, double valB, double valC, double valD, double& valE, double& valF)
{
    valE = (valA + valB + valC + valD) / 4;
    valF = (valA + valB + valC + valD);
    return;
}

void calcAreaPerimeter(double radius, double& area, double& perimeter)
{
    area = 3.14 * (radius * radius);
    perimeter = (2 * 3.14) * radius;
    return;
}

double calcArea(double length, double width)
{
    return length * width;
}








