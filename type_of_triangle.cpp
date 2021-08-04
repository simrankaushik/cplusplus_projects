//write a program to check the type of triangle using dimensions 
#include<iostream>
using namespace std;
int main ()
{
	float a,b,c;
	cout << "enter the side 1 of the triangle: ";
	cin >> a;
	cout << "enter the side 2 of the triangle: ";
	cin >> b;
	cout << "enter the side 3 of the triangle: ";
	cin >> c;
	if(a==b && b==c)
	{
		cout << "the triangle is an equilateral triangle";
	}
	else if (a==b || b==c || c==a)
	{
		cout << "the triamgle is an isoceles triangle";
	}
	else 
	{
		cout << "the triangle is a scalene triangle";
	}
}
