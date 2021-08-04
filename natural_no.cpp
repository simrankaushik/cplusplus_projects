// write a program to sum all the natural numbers till n 


#include<iostream>
using namespace std;
int main()
{
	int i,n;
	int sum=0;
	cout << "enter the number ";
	cin >> n;
	for (i=0;i<=n;i++)
	{
		cout <<  i << "\n";
		sum = sum + i;
	}
	cout << "the additon of the entered number: "<< sum;
	
}
