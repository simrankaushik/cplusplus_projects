//write a program to find out maximum of three numbers


#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout << "enter the first number: ";
	cin >> a;
	cout << "enter the second number: ";
	cin >> b;
	cout << "enter the third number: ";
	cin >> c;
	cout << "The numbers entered by the user are "<<a<<","<< b<<" and "<< c;
	if (a>b)
	{
		if(a>c)
		{
			cout << "the first number is the largest ";
		}
		else
		{
			
			
				cout << "the third number is the largest ";
			
		}
	}
	else
	{
		if(b>c)
		{
			cout << "the second number is the largest ";
		}
		else
		{
			cout << "the third number is the largest ";
		}
	}
}

