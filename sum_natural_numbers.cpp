//write a code to find the sum of the n natural numbers 


#include<iostream>
using namespace std;
int main()
{
	int n,i;
	int sum = 0;
	cout << "Enter the value of n to be sumed: ";
	cin >> n;
	for( i=1;i<=n;i++)
	{
		cout << i;
		sum +=i;
	}
	cout << "\nsum = " << sum;
	return 0;
}
