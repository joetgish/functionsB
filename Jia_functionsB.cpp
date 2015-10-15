//David Jia
//10-14-15
//Programming PRactice - Functions B
#include<iostream> // input output
#include<cassert> // assert()
using namespace std;

double feetToInches(double val); // converts feet to inches

void feetToInches(double& val, double valA); // converts feet to inches

double computeRectangle(double valA, double valB); // computes area of a rectangle

void computerArea(double valA, double valB, double& valC); // computes area of a rectangle

void computerArea(double valA, double valB, double& valArea, double& valPerimeter); // computes
										// the perimeter and the area of a rectangle
										
void stats(double valA, double valB, double valC, double valD, double& valE, double& valF);
// computes average and the sum of the four numbers given 

void calcAreaPerimeter(double radius, double& area, double& perimeter); // computes the area 
													// and the circumference of a circle
													
double calcArea(double length, double width); // computes area of a rectangle

int main()
{
	double num1, num2;
	
	assert(feetToInches(12) == 144.0);
	assert(feetToInches(6) == 72.0);
	assert(feetToInches(3) == 36.0);
	
	feetToInches(num1, 10.0);
	cout << " Expected: 120" << endl;
	feetToInches(num1, 12.0);
	cout << " Expected: 144" << endl;
	feetToInches(num1, 8.0);
	cout << " Expected: 96" << endl;
	
	assert(computeRectangle(5.0,5.0) == 25.0);
	assert(computeRectangle(7.5,6.2) == 46.5);
	assert(computeRectangle(8.0,5.5) == 44.0);
	
	computerArea(8.0,8.0,num1);
	cout << "Actual: " << num1 << " Expected: 64" << endl;
	computerArea(6.0,9.0,num1);
	cout << "Actual: " << num1 << " Expected: 54" << endl;
	computerArea(12.0,10.0,num1);
	cout << "Actual: " << num1 << " Expected: 120" << endl;
	
	computerArea(8.0,8.0,num1,num2);
	cout << "Actual: " << num1 << " " << num2 << " Expected: 64 32" << endl;
	computerArea(6.0,8.0,num1,num2);
	cout << "Actual: " << num1 << " " << num2 << " Expected: 48 28" << endl;
	computerArea(9.0,7.0,num1,num2);
	cout << "Actual: " << num1 << " " << num2 << " Expected: 63 32" << endl;
	
	stats(5,5,5,5,num1,num2);
	cout << "Actual: " << num1 << " " << num2 << " Expected: 20 5" << endl;
	stats(10,5,7,10,num1,num2);
	cout << "Actual: " << num1 << " " << num2 << " Expected: 32 8" << endl;
	stats(10,10,5,5,num1,num2);
	cout << "Actual: " << num1 << " " << num2 << " Expected: 30 7.5" << endl;
	
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	
	calcAreaPerimeter(3,num1,num2);
	cout << "Actual: " << num1 << " " << num2 << " Expected: 28.27 18.85" << endl;
	calcAreaPerimeter(5,num1,num2);
	cout << "Actual: " << num1 << " " << num2 << " Expected: 78.54 31.42" << endl;
	calcAreaPerimeter(7,num1,num2);
	cout << "Actual: " << num1 << " " << num2 << " Expected: 153.94 43.98" << endl;
	
	assert(calcArea(5,5) == 25);
	assert(calcArea(7,8) == 56);
	assert(calcArea(6,9) == 54);
	
	cout << "Ran correctly to here." << endl;

	return 0;
}

double feetToInches(double val)
{
	const double CONVERT = 12.0;
	return val * CONVERT;
}

void feetToInches(double& val, double valA)
{
	val = valA * 12.0;
	cout << "Actual: " << val;
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
	valPerimeter = (2 * valA) + (2 * valB);
	return;
}

void stats(double valA, double valB, double valC, double valD, double& valE, double& valF)
{
	valE = valA + valB + valC + valD;
	valF = valE / 4;
	return;
}

void calcAreaPerimeter(double radius, double& area, double& perimeter)
{
	area = radius * radius * 3.14159;
	perimeter = 2 * 3.14159 * radius;
	return;
}

double calcArea(double length, double width)
{
	return length * width;
}
