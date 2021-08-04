//to find out the simple interest
#include<iostream>
using namespace std;

int main()
{
	int p,i,n,s;
	cout << "Welcome to the simple interest counter.";
	cout << "\nEnter your principle amount: ";
	cin >> p;
	cout << "Enter your interest rate: ";
	cin >> i;
	cout << "Enter your number of payments: ";
	cin >> n;
	s = (p*i*n)/100;
	cout << "Your simple interest as per your details is: "<<s<< " rupees";
}
