//Author:Emily Garcia
//Created:Oct 13 2015
//Description:Six sets of functions
#include <iostream>
using namespace std;

// Declare Prototype
double feetToInches(double val);
void  feetToInches(double& val1 , double& val2);
double computeRectangle(double valA, double valB);
void computerArea (double valA, double valB, double& valC);
void computerArea (double valA, double valB, double& valArea, double& valPerimeter);
void  stats(double valA, double valB, double valC, double valD, double& valE, double& valF);
void calcAreaPerimeter(double radius, double& area, double& perimeter);
double calcArea(double length, double width);

int main ()
{
   
   double num1, num2, num3, num4, num5, num6;// Declare variable
   
   //Test Case: Set #1
   num1 = 2.0;
   feetToInches(num2, num1);
   
   cout << "Expected: 24" << endl;
   cout << "Actual: " << feetToInches(num1) << endl;
   cout << "Expected: 24" << endl;
   cout << "Actual: " << num2 << endl;
   
   //Test Case: Set #2
   num1 = 2.0;
   num2 = 5.0;
   computerArea(num1, num2, num3);
   
   cout << "Expected: 10" << endl;
   cout << "Actual: " << computeRectangle(num1, num2) << endl;
   cout << "Expected: 10" << endl;
   cout << "Actual: " << num3 << endl;
   
   //Test Case: Set #3
   num1 = 2;
   num2 = 2;
   computerArea(num1, num2, num3, num4);
   
   cout << "Expected: 4" << endl;
   cout << "Actual: " << num3 << endl;
   cout << "Expected: 8" << endl;
   cout << "Actual: " << num4 << endl;
   
   //Test Case: Set #4
   num1 = 1;
   num2 = 2;
   num3 = 3;
   num4 = 4;
   stats(num1, num2, num3, num4, num5, num6);
   
   cout << "Expected: 2.5" << endl;
   cout << "Actual: " << num5 << endl;
   cout << "Expected: 10" << endl;
   cout << "Actual: " << num6 << endl;
   
   //Test Case: Set #5
   num1 = 5;
   calcAreaPerimeter(num1, num2, num3);
   
   cout << "Expected: 78.5375" << endl;
   cout << "Actual: " << num2 << endl;
   cout << "Expected: 31.415" << endl;
   cout << "Actual: " << num3 << endl;
   
   //Test Case: Set #6
   num1 = 2.0;
   num2 = 3.0;
   
   cout << "Expected: 6" << endl;
   cout << "Actual: " << calcArea(num1, num2) << endl;
   
   return 0;
}
double feetToInches(double val)// Converts ft to in using return type double
{
   return val * 12;
}
void feetToInches(double& val1, double& val2)// Converts ft to in using return type void
{
   val1 = val2 * 12;
   return;
}
double computeRectangle(double valA, double valB)// Computes area of a rectangle using return type double
{
   return valA * valB;
}
void computerArea(double valA, double valB, double& valC)// Computes area of a rectangle using return type void
{
   valC = valA * valB;
   return;
}
void computerArea(double valA, double valB, double& valArea, double& valPerimeter)// computes area and perimeter of rectangle using return type void
{
   valArea = valA * valB;
   valPerimeter = (valA * 2) + (valB * 2);
   return;
}
void  stats(double valA, double valB, double valC, double valD, double& valE, double& valF)// computes avg and sum of parameters a through d using return type void
{
   valE = (valA + valB + valC + valD) / 4;
   valF = valA + valB + valC + valD;
   return;
}
void calcAreaPerimeter(double radius, double& area, double& perimeter)// calculated area and perimeter of a circle using return type void
{
   const double PI = 3.1415;
   area = PI * (radius * radius);
   perimeter = 2 * PI * radius;
   return;
}
double calcArea(double length, double width)// calculates area using return type double
{
   return length * width;
}
