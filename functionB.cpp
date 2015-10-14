//Author:Emily Garcia
//Created:Oct 13 2015
//Description:
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

int main ()
{
   
   double num1, num2, num3, num4, num5, num6;// Declare variable
   
/*   //Test Case: Set #1
   num1 = 2.0;
   cout <<  feetToInches(num1) << endl;
   feetToInches(num2, num1);
   cout << num2 << endl;
   
   //Test Case: Set #2
   num1 = 2.0;
   num2 = 5.0;
   cout <<  computeRectangle(num1, num2) << endl;
   computerArea(num1, num2, num3);
   cout << num3 << endl;
   
   //Test Case: Set #3
   num1 = 2;
   num2 = 2;
   computerArea(num1, num2, num3, num4);
   cout << num3 << endl;
   cout << num4 << endl;
   
   //Test Case: Set #4
   num1 = 1;
   num2 = 2;
   num3 = 3;
   num4 = 4;
   stats(num1, num2, num3, num4, num5, num6);
   cout << num5 << endl;
   cout << num6 << endl;*/
   
   //Test Case: Set #5
   num1 = 5;
   calcAreaPerimeter(num1, num2, num3);
   cout << num2 << endl;
   cout << num3 << endl;
   
   return 0;
}
/*double feetToInches(double val)// Converts ft to in 
{
   return val * 12;
}
void feetToInches(double& val1, double& val2)
{
   val1 = val2 * 12;
   return;
}
double computeRectangle(double valA, double valB)
{
   return valA * valB;
}
void computerArea(double valA, double valB, double& valC)
{
   valC = valA * valB;
   return;
}
void computerArea(double valA, double valB, double& valArea, double& valPerimeter)
{
   valArea = valA * valB;
   valPerimeter = (valA * 2) + (valB * 2);
   return;
}
void  stats(double valA, double valB, double valC, double valD, double& valE, double& valF)
{
   valE = (valA + valB + valC + valD) / 4;
   valF = valA + valB + valC + valD;
   return;
}*/
void calcAreaPerimeter(double radius, double& area, double& perimeter)
{
   const double PI = 3.1415;
   area = PI * (radius * radius);
   perimeter = 2 * PI * radius;
   return;
}
