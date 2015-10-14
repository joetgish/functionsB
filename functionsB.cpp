//Louis Paul Romero
//October 13, 2015
//Functions B

#include <iostream>

using namespace std;

double feetToInchers(double val);
void feetToInches(double& val);
double computeRectangle(double valA, double valB);
void computeArea(double valA, double valB, double& valC);
void computeAreaPerimeter(double valA, double valB, double& valArea, double& valPerimeter);
void  stats(double valA, double valB, double valC, double valD, double& valE, double& valF);
double calcAreaPerimeterCircle(double radius, double& area, double& perimeter);
double calcArea(double length, double width);

int main()
{
	
	cout << feetToInchers(7) << endl;
	cout << feetToInchers(11) << endl;

    	double value1 = 5, value2 = 8;
    	feetToInches(value1);
    	cout << value1 << endl;
	feetToInches(value2);
    	cout << value2 << endl;

	cout << computeRectangle(1, 2) << endl;
    	cout << computeRectangle(3,7) << endl;

   	double a = 2, b = 4, c;
    	computeArea(a, b, c);
    	cout << c << endl;
	computeArea(1, 6, c);
	cout << c << endl;
    
    
    	double x = 5, y = 10, Ar, Per;
    	computeAreaPerimeter(x,y, Ar, Per); 
    	cout << Ar << endl;
    	cout << Per << endl;
	computeAreaPerimeter(9, 8, Ar, Per); 
    	cout << Ar << endl;
    	cout << Per << endl;

	double q = 1, p = 2, e = 3, o = 4, sum, average;
	stats(q, p, e, o, sum, average);
	cout << sum << endl;
	cout << average << endl;
	stats(9, 8, 7, 6, sum, average);
	cout << sum << endl;
	cout << average << endl;
	
	double r = 2, A, P;
	calcAreaPerimeterCircle(r, A, P);
	cout << A << endl;
	cout << P << endl;
	calcAreaPerimeterCircle(3, A, P);
	cout << A << endl;
	cout << P << endl;
	
	double l = 1, w = 11; 
	cout << calcArea(l,w) << endl;	
	cout << calcArea(5,9) << endl;	

	return 0;
    
}

double feetToInchers(double val)
{
 	double result;
 	result = val * 12;
 	return result;   
}

void feetToInches(double& val)
{
 	val = val * 12;   
}

double computeRectangle(double valA, double valB)
{
 	return valA * valB;
}

void computeArea(double valA, double valB, double& valC)
{
 	valC = valA * valB;
}

void computeAreaPerimeter(double valA, double valB, double& valArea, double& valPerimeter)
{
 	valArea = valA * valB;
 	valPerimeter = 2 * (valA +valB);
}

void  stats(double valA, double valB, double valC, double valD, double& valE, double& valF)
{
	valE = valA + valB + valC + valD;
	valF = valE/4.0;
}

double calcAreaPerimeterCircle(double radius, double& area, double& perimeter)
{
	perimeter = 2 * 3.14 * radius;
	area = 3.14 * radius * radius;
}

double calcArea(double length, double width)
{
	return length * width;
}
