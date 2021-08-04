// write a program to check if the given number is prime or not 

#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the number: ";
	cin>>n;
	if(n%2==0)
	{
		cout<<"it is not a prime number";
	}
	else
	{
		cout<<"it is a prime number";
	}
}
