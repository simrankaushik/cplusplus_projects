// write a program to diaplay the multiplication table upto 10 of the number entered by the user

#include<iostream>
using namespace std;
int main()
{
	int n,i;
	cout << "enter a number: ";
	cin >> n;
	for(i=0;i<=10;i++)
	{
		cout << n << "x" << i << "=" << n*i<< "\n";
	}
}
