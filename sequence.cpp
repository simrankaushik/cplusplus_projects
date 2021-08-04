//ask the user for the number and print them in sequence 


#include<iostream>
using namespace std;
int main()
{
	int n, a, i;
	cout << "enter the starting number of the sequence: ";
	cin >> n;
	cout << "enter the last number of the sequence: ";
	cin >> a;
	for (i=n;i<=a;i++)
	{
		cout << i << "\n";
	}	
}
