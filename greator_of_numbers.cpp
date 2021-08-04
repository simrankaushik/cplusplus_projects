#include<iostream>
using namespace std;
int main()
{
	float a,b;
	cout << "enter the first number: ";
	cin >> a;
	cout << "enter the second number: ";
	cin >> b;
	if(a==b)
	 {
	 	cout << "both numbers" << a << "and" << b << " entered by the user are same";
	 }
	 else
	 {
	if (a<b)
	{
		cout << "the greater number entered by the user is: " <<b;
	}
	else
	{
		cout << "the greater number entered by the user is: " <<a;
	}
}
}
