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

int main ()
{
   
   double num1, num2, num3, num4;// Declare variable
   
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
   cout << num3 << endl;*/
   
   //Test Case: Set #3
   num1 = 2;
   num2 = 2;
   computerArea(num1, num2, num3, num4);
   cout << num3 << endl;
   cout << num4 << endl;
   
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
}*/
void computerArea(double valA, double valB, double& valArea, double& valPerimeter)
{
   valArea = valA * valB;
   valPerimeter = (valA * 2) + (valB * 2);
   return;
}
