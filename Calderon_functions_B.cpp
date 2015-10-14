// Name: Daniel Calderon
// Date: October 13, 2015
// Function B bypass

#include <iostream>
#include <cmath>
#include <cassert>
#include <string>

using namespace std;

double feetToInche(double val);
void  feetToInches(double valA,double& valB);
double computeRectangle(double valA, double valB);
void computerArea (double valA, double valB, double& valC);
void computerArea (double valA, double valB, double& valArea, double& valPerimeter);
void  stats(double valA, double valB, double valC, double valD, double& valE, double& valF);
void calcAreaPerimeter(double radius, double& area, double& perimeter);
double calcArea(double length, double width);


int main()
{
    double E = .001;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(10);
//******************************feetToInche***************************************
    assert(feetToInche(5)==60);
    assert(feetToInche(2.5)==30);
    assert(feetToInche(0)==0);
//******************************feetToInches**************************************
    double val,val1;
    feetToInches(5,val);
    assert(fabs(val-60)<E);
    
    feetToInches(6.3,val1);
    assert(fabs(val1-75.6)<E);
//******************************computeRectangle********************************
    double val2;
    assert(computeRectangle(5,3)==15);
    val2 = computeRectangle(42.3,33.1);
    assert(fabs(val2-1400.13)<E);
//******************************computerArea*************************************
    double val3,val4;
    computerArea(1.2, 5.2,val3);
    assert(fabs(val3-6.24)<E);
    
    computerArea(0.0,5.2,val4);
    assert(fabs(val4-0)<E);
//******************************computerArea*************************************
    double val5,val6,val7,val8;
    computerArea (32.3, 42.1,val5, val6);
    assert(fabs(val5-1359.83)<E);
    assert(fabs(val6-148.8)<E);
    
    computerArea (0, 23.1,val7, val8);
    assert(fabs(val7-0)<E);
    assert(fabs(val8-46.2)<E);
//**********************************stats*******************************************
    double val9,val10,val11,val12;
    stats(5.0, 5.3, 4.2,4.9, val9, val10);
    assert(fabs(val9-4.85)<E);
    assert(fabs(val10-19.4)<E);

    stats(0.0,0.54,9.0,4.3, val11, val12);
    assert(fabs(val11-3.46)<E);
    assert(fabs(val12-13.84)<E);
//*******************************calcAreaPerimeter********************************
    double val13,val14,val15,val16;
    calcAreaPerimeter(4.3, val13, val14);
    assert(fabs(val13-58.0880481649) < E);
    assert(fabs(val14-27.0176968209) < E);
    
    calcAreaPerimeter(2.1, val15, val16);
    assert(fabs(val15-13.8544236023) < E);
    assert(fabs(val16+(-13.194689145)) < E);
//*****************************calcArea********************************************
    assert(fabs(calcArea(3.2,4.1)-13.12)<E);
    assert(fabs(calcArea(0.0,2.3)-0.0)<E);
//**********************************************************************************   
    
    return 0;
}

double feetToInche(double val)
{
    return val*12;
}
void  feetToInches(double valA,double&  valB)
{
    valB = valA*12;
    return;
}
double computeRectangle(double valA, double valB)
{
    return valA*valB;
}
void computerArea (double valA, double valB, double& valC)
{
    valC = valA*valB;
    return;

}
void computerArea (double valA, double valB, double& valArea, double& valPerimeter)
{
    valArea = valA*valB;
    valPerimeter = (2 * valA)+(2*valB);
    return;
}
void  stats(double valA, double valB, double valC, double valD, double& valE, double& valF)
{
    valE = (valA+valB+valC+valD)/4;
    valF = (valA+valB+valC+valD);
    return;
}
void calcAreaPerimeter(double radius, double& area, double& perimeter)
{
    const double pi = 3.14159265359;
    area = pi*(radius*radius);
    perimeter = (2*pi*radius);
    return;
}
double calcArea(double length, double width)
{
    return length * width;
}



