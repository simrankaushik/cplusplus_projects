//write a program to convert fahrenheit temperature to celsius temperature


#include<iostream>
using namespace std;
int main()
{ 
	int f,c;
	cout << "This programe will help us in converting the fahrenheit temperature to celsius tempearture";
	cout << "\nEnter the temperature in fahrenheit: ";
	cin >> f;
	c = 5/9*(f-32);
	cout << "Given temperature in celsius is: "<<c<<" degree celsius";
}
