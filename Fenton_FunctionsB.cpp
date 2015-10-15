// Name: Ali Fenton
// Date: October 15,2015
// Programming Practice - Functions B

#include <iostream>
#include <cassert>
#include <cmath>
#include <math.h>

using namespace std;

double feetToInches(double val); //Problem 1A
void feetToInches(double val, double&  valA); // Problem 1B
double computeRectangle(double valA, double valB); //Problem 2A
void computeRectangle(double valA, double valB, double& valC); //Problem 2B
void computerArea(double valA, double valB, double& valArea, double& valPerimeter); //Problem 3A 
void stats(double valA, double valB, double valC, double valD, double& valE, double& valF); //Problem 4A
void calcAreaPerimeter(double radius, double& area, double& perimeter); //Problem 5A
double calcArea(double length, double width); //Problem 6A

const double e = .0001;

int main(){

    //Problem 1A(feetToInches)
    assert(feetToInches(5) == 60);
    assert(feetToInches(12) == 144);
    assert(feetToInches(1) == 12);
    
    //Problem 1B(feetToInches)
    double valA;
    feetToInches(5,valA);
    assert(fabs(valA - 60) < e);
    
    feetToInches(9,valA);
    assert(fabs(valA - 108) < e);
    
    feetToInches(1,valA);
    assert(fabs(valA - 12) < e);
    
    //Problem 2A(ComputeRectangle)
    assert(computeRectangle(2,5) == 10);
    assert(computeRectangle(6,9) == 54);
    assert(computeRectangle(3,7) == 21);

    //Problem 2B(ComputeRectangle)
    double valB;
    computeRectangle(3,5,valB);
    assert(fabs(valB - 15) < e);
    
    computeRectangle(8,1,valB);
    assert(fabs(valB - 8) < e);
    
    computeRectangle(2,7,valB);
    assert(fabs(valB - 14) < e);
    
    //Problem 3A(ComputeArea)
    double area, perimeter;
    computerArea(2,3,area,perimeter);
    assert(fabs(area - 6) < e);
    assert(fabs(perimeter - 10) < e);
    
    computerArea(8,4,area,perimeter);
    assert(fabs(area - 32) < e);
    assert(fabs(perimeter - 24) < e);
    
    computerArea(2,1,area,perimeter);
    assert(fabs(area - 2) < e);
    assert(fabs(perimeter - 6) < e);
    
    //Problem 4A(Stats)
    double valE, valF;
    stats(3,5,2,1,valE, valF);
    assert(fabs(valE - 11) < e);
    assert(fabs(valF - 2.75) < e);
    
    stats(1,2,0,1,valE, valF);
    assert(fabs(valE - 4) < e);
    assert(fabs(valF - 1) < e);
    
    stats(4,6,1,1,valE, valF);
    assert(fabs(valE - 12) < e);
    assert(fabs(valF - 3) < e);
    
    //Problem 5A(calcAreaPerimeter)
    double calArea, calcPerimeter;
    calcAreaPerimeter(2, calArea, calcPerimeter);
    assert(fabs(calArea - 12.5663704) < e);
    assert(fabs(calcPerimeter - 12.5663704) < e);
    
    calcAreaPerimeter(5, calArea, calcPerimeter);
    assert(fabs(calArea - 78.539815) < e);
    assert(fabs(calcPerimeter - 31.415926) < e);
    
    calcAreaPerimeter(10, calArea, calcPerimeter);
    assert(fabs(calArea - 314.15926) < e);
    assert(fabs(calcPerimeter - 62.831852) < e);
    
    //Problem 6A(calcArea)
    assert(calcArea(4,5) == 20);
    assert(calcArea(7,1) == 7);
    assert(calcArea(9,10) == 90);
}

//************************Problem 1A(feetToInches)*******************************
double feetToInches(double val){
    double result;
    result = val * 12; 
    return result;
}

//************************Problem 1B(feetToInches)*******************************
void feetToInches(double val, double& valA){
    valA = val * 12;
    return;
}

//************************Problem 2A(ComputeRectangle)*******************************
double computeRectangle(double valA, double valB){
    double result;
    result = valA * valB; 
    return result;
}

//************************Problem 2B(ComputeRectangle)*******************************
void computeRectangle(double valA, double valB, double& valC){
    valC = valA * valB;
    return;
}

//************************Problem 3A(ComputeArea)*******************************
void computerArea (double valA, double valB, double& valArea, double& valPerimeter){
    valArea = valA * valB;
    valPerimeter = (2 * valA) + (2 * valB);
    return;
}

//***************************Problem 4A(Stats)*********************************
void  stats(double valA, double valB, double valC, double valD, double& valE, double& valF){
    valE = valA + valB + valC + valD;
    valF = valE / 4;
    return;
}

//**************************Problem 5A(calcAreaPerimeter)*******************************
void calcAreaPerimeter(double radius, double& area, double& perimeter){
    double pi = 3.1415926;
    area = pi * pow(radius,2);
    perimeter = 2 * pi * radius;
    return;
}

//**************************Problem 6A(calcArea)*******************************
double calcArea(double length, double width){
    double result;
    result = length * width;
    return result;
}

