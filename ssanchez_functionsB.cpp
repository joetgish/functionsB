/*
***********************************************************************************
Name: Samuel Sanchez
Date: 13 October 2015
Description: Implements a series of functions with a return type of void, int, or double
***********************************************************************************
*/
#include <iostream> // cin, cout
#include <cassert> // assert()
#include <cmath> // pow()

using namespace std;
// Convert feet to inches
double feetToInches(double feet);
void feetToInchesConverter(double& inches, double feet);
// computers area of a rectangle
double computeRectangle(double width, double height);
void computeArea(double width, double height, double& area);
// Computes perimeter and area of a rectangle
void computeAP(double width, double height, double& perimeter, double& area);
// computes the sum and mean of four numbers
void stats(double valA, double valB, double valC, double valD, double& sum, double& mean);
// Calculates the area and circumference of a circle
void calcCircle(double radius, double& area, double& perimeter);
// Calculates the area of a rectangle
double calcRectangleArea(double width, double height);

int main()
{
    double inches, area, perimeter, sum, mean;
    const double E = 0.0001; // Used for asserting decimal values
    
    cout << endl << feetToInches(12) << endl;
    //assert(feetToInches(12) == 144);
    feetToInchesConverter(inches, 3.300);
    //assert(fabs(inches - 39.6) < E);
    cout << inches << endl;
    cout << feetToInches(-3) << endl;
    //assert(feetToInches(-3) == -1);
    feetToInchesConverter(inches, .00001);
    //assert(fabs(inches - 0.00012) < E);
    cout << inches << endl << endl;
    
    cout << computeRectangle(6, 3.66)<< endl;
    //assert(computeRectangle(6, 3.66)== 21.96);
    computeArea(67, 76, area);
    //assert(fabs(area - 5092) < E);
    cout << area << endl;
    cout << computeRectangle(4, -1)<< endl;
    //assert(computeRectangle(4, -1) == -1);
    computeArea(9, 12, area);
    //assert(fabs(area - 108) < E);
    cout << area << endl << endl;
    
    computeAP(2, 12.6,  perimeter, area);
    //assert(fabs(perimeter - 29.2) < E);
    //assert(fabs(area - 25.2) < E);
    cout << perimeter << endl;
    cout << area << endl;
    computeAP(12, -4,  perimeter, area);
    //assert(perimeter == -1);
    //assert(area == -1);
    cout << perimeter << endl;
    cout << area << endl << endl;
    
    stats(12, 3, 7, 12, sum, mean);
    //assert(sum == 34);
    //assert(fabs(mean - 8.5) < E);
    cout << sum << endl;
    cout << mean << endl;
    stats(-8, 1, 6.66, -4, sum, mean);
    //assert(sum == -4.34);
    //assert(fabs(mean + 1.085) < E);
    cout << sum << endl;
    cout << mean << endl << endl;

    calcCircle(12.0, area, perimeter);
    //assert(fabs(perimeter - 75.36) < E);
    //assert(fabs(area - 452.16) < E);
    cout << area << endl;
    cout << perimeter << endl << endl;
    calcCircle(-4, area, perimeter);
    //assert(perimeter == -1);
    //assert(area == -1);
    cout << area << endl;
    cout << perimeter << endl << endl;
    
    cout << calcRectangleArea(22, 12)<< endl;
    //assert(calcRectangleArea(22, 12) == 264);
    cout << calcRectangleArea(0, 1)<< endl << endl;
    //assert(calcRectangleArea(0, 1) == 0);

    return 0;
}

double feetToInches(double feet)
{// 1 foot = 12 inches
    double inches;
    if(feet >= 0)
    {
        inches = feet * 12;
        return inches;
    }
    else
        return -1;
}
void feetToInchesConverter(double& inches, double feet)
{ // 1 foot = 12 inches
    if (feet >= 0)
        inches = feet * 12;
    else
        inches = -1;
    return;
}
double computeRectangle(double width, double height)
{
    double area;
    if (width >= 0 && height >= 0)
    {
        area = width * height;
        return area;
    }
    else
    {
        return -1;
    }
}
void computeArea(double width, double height, double& area)
{ // Area of a rectangle
    if (width >= 0 && height >= 0)
        area = width * height;
    else
        area = -1;
    return;
}
void computeAP(double width, double height, double& perimeter, double& area)
{ // AP = area and perimeter
    if (width >= 0 && height >= 0)
    {
        perimeter = (width * 2) + (height * 2);
        area = width * height;
    }
    else
    {
        perimeter = -1;
        area = -1;
    } 
}
void stats(double valA, double valB, double valC, double valD, double& sum, double& mean) // mean = average
{
        sum = valA + valB + valC + valD;
        mean = sum / 4;
}
void calcCircle(double radius, double& area, double& perimeter)
{
    if (radius >= 0)
    {
        area = 3.14 * pow(radius, 2);
        perimeter = (2 * 3.14 * radius);
    }
    else
    {
        area = -1;
        perimeter = -1;
    }
}
double calcRectangleArea(double width, double height)
{
    if (width >= 0 && height >= 0)
    {
        double area = width * height;
        return area;
    }
    else
        return -1;    
}
