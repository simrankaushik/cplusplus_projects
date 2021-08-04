//program for the addition of only the positive integers
//once the loop is breaked when user will enter a negative number print sum of the numbers entered till now 

#include<iostream>
using namespace std;

int main()
{
	int  number;
	int sum = 0;
	
	cout << "enter the number: ";
	cin >> number;
	
	while (number>=0)
	{
		sum+=number;
		cout <<"enter the number: ";
		cin >> number;
	}
	
	cout << "\nthe sum is"<<sum<<endl;
	
	return 0;
}
