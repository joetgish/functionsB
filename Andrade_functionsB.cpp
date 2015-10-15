//Israel Andrade
//Date: 10/13/2015
//Description: 
#include <cassert>
#include <iostream>
using namespace std;

//Write and test the following function to convert feet to inches. The prototype for this function is:
double feetToInches(double val);
//Storing our result value int val to see what we changed
void feetToInches(double& val, double val2);

//Write and test the following function to calculate area. The prototype for this function is:
double computeRectangle(double valA, double valB);
void computerArea(double valA, double valB, double& valC);

//Write and test the following function to calculate area, perimeter. The prototype for this function is:
void computerArea (double valA, double valB, double& valArea, double& valPerimeter);

//Write and test the following function that returns the average, sum of the four parameters that are passed to it. The prototype for this function is:  
void  stats(double valA, double valB, double valC, double valD, double& valE, double& valF);

//Write and test a function that the calculates area, perimeter of a circle.  The function receives one value, radius of type double, and returns the correct values;
void calcAreaPerimeter(double radius, double& area, double& perimeter);

//Write and test a function that the calculates area of a rectangle.  The function receives two values, length and width and returns the value;
double calcArea(double length, double width);

int main()
{
   double result;
   //Variables for function computeRectangle and computerArea//
   double area;
   //Variables for function for computerArea
   double area2;
   double perimeter;
   //Variables for function stats
   double sum;
   double average;
   //Variables for function calAreaPerimeter
   double area3;
   double perimeter2;
   
    feetToInches(result, 12);
    assert(result == 144);
    feetToInches(result, 11);
    assert(result == 132);
    feetToInches(result, 10);
    assert(result == 120);
 
    computerArea(10, 10, area);
    assert(area == 100);
    computerArea(12, 11, area);
    assert(area == 132);
    computerArea(4, 7, area);
    assert(area == 28); 
    //Function computeArea
    computerArea(4, 2, area2, perimeter);
    assert(area2 == 8);
    assert(perimeter == 12);
    computerArea(8, 7, area2, perimeter);
    assert(area2 == 56);
    assert(perimeter == 30);
    computerArea(9, 2, area2, perimeter);
    assert(area2 == 18);
    assert(perimeter == 22);
    //Function stats
    stats(1, 2, 3, 4, sum, average);
    assert(sum == 10);
    assert(average = 2.5);
    stats(4, 4, 4, 4, sum, average);
    assert(sum == 16);
    assert(average = 4); 
    stats(5, 6, 2, 2, sum, average);
    assert(sum == 15);
    assert(average = 3.75);
      
    return 0;
}

double feetToInches(double val)
{
    return (val * 12);
}
void feetToInches(double& val, double val2)
{
    val = (val2 * 12);
    return;
}
double computeRectangle(double valA, double valB)
{
    return (valA * valB);
}
void computerArea(double valA, double valB, double& valC)
{
    valC = (valA * valB);
    return;
}
void computerArea (double valA, double valB, double& valArea, double& valPerimeter)
{
    valArea = (valA * valB);
    valPerimeter = (valA * 2) + (valB * 2);
    return;
}
void  stats(double valA, double valB, double valC, double valD, double& valE, double& valF)
{
    valE = (valA + valB + valC + valD);
    valF = (valA + valB + valC + valD) / (4.0);  
    return; 
}
void calcAreaPerimeter(double radius, double& area, double& perimeter)
{
    const double PI = 3.14159;
    area = (PI) * (radius * radius);
    perimeter = (2 * PI) * (radius);
    return;
}
double calcArea(double length, double width)
{
    return (length * width);
}
