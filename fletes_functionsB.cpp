//Miguel Fletes
//10/13/15
//strings B

#include<iostream>
#include<cassert>

using namespace std;

double feetToInches(double val);
void  FeetToInches(double&  val);
double computeRectangle(double valA, double valB);
void computerArea (double valA, double valB, double& valC);
void computerArea (double valA, double valB, double& valArea, double& valPerimeter);
void  stats(double valA, double valB, double valC, double valD, double& average, double& sum);
void calcAreaPerimeter(double radius, double& area, double& circ);
double calcArea(double length, double width);

int main()
{   
    //problem 1
    double feet1 = 5;
    double feet2 = 7;
    assert(feetToInches(feet1) == 60);
    assert(feetToInches(feet2) == 84);
    FeetToInches(feet1);
    FeetToInches(feet2);
    
    // problem 2
    double a = 4;
    double b = 5;
    double c = 6;
    double d = 8;
    assert(computeRectangle(5, 5) == 25);
    assert(computeRectangle(6, 8) == 48);
    computerArea (a, b, c);
    computerArea (c, d, b);
    
    //problem 3
    double e = 7;
    double f = 9;
    double area, perimeter;
    computerArea(d, e, area, perimeter);
    cout << "Area of another rectangle is " << area << " and the " ;
    cout << "Perimeter of that rectangle is " << perimeter << endl;
    
    //problem 4
    int g =14;
    int h =3;
    int i =11;
    int j =6;
    double average, sum;
    stats(g, h, i, j, average, sum);
    cout << "average of 14, 3, 11, and 6 is " << average << " and the " ;
    cout << "sum of those numbers is " << sum << endl;
    
    //problem 5
    double area1, circ, radius = 9;
    calcAreaPerimeter(radius, area1, circ);
    cout << "Area of a circle is " << area1 << " and the ";
    cout << "circumference of that circle is " << circ << endl;
    
    //problem 6
    assert(calcArea(5, 8) == 40);
    assert(calcArea(9, 11) == 99);
    
    return 0;
}
//***********************************************
double feetToInches(double val)
{//converts from feet to inches
    double result;
    result = val * 12;
    return result;
}
//***********************************************
void  FeetToInches(double&  val)
{//converts from feet to inches
    double result = val * 12;
    cout << val << " feet equals " << result << " inches" << endl;
}
//***********************************************
double computeRectangle(double valA, double valB)
{// calculates area
    double result = valA * valB;
    return result;
}
//***********************************************
void computerArea (double valA, double valB, double& valC)
{// calculates area
    double result = valA * valB * valC;
    cout << "Area of a rectangle equals " << result << endl;
}
//***********************************************
void computerArea (double valA, double valB, double& valArea, double& valPerimeter)
{// clculates area and perimeter
    valPerimeter = 2 * (valA + valB);
    valArea = valA + valB;
}
//***********************************************
void  stats(double valA, double valB, double valC, double valD, double& average, double& sum)
{// calculates average and sum
    average = (valA + valB + valC + valD) / 2;
    sum = valA + valB + valC + valD;
}
//***********************************************
void calcAreaPerimeter(double radius, double& area, double& circ)
{// calculates area and circumference
    double pi = 3.14;
    area = pi * radius * radius;
    circ = 2 * pi * radius;
}
//**********************************************
double calcArea(double length, double width)
{// calculates average and sum
    double result = length * width;
    return result;
}
