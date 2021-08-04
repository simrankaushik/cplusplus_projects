// write a number to add only positive integers and stop when negative appears


#include<iostream>
using namespace std;
int main()
{
	int sum=0;
	int number;
	int i;
	cout << "enter the number: ";
	cin >> number;
	if (number>=0)//if the number is positive only then do this 
	//while(number>=0)
	{
		//for(i=number;i<=5;i++)
		//sum+=number;
		//{
		cout << "enter the number: ";
		cin >> number;
		sum+=number;
		//}
	}
	cout <<" the sum is " << sum;
	//else
	//{
		//cout << "you have entered a negative value whose sum cannot be counted";
	//}
}
