//write a program to print all the prime numbers in the given range

#include<iostream>
using namespace std;
int main()
{
	int a,b,num,i;  
	cout<<"enter the starting number: ";
	cin>>a;
	cout<<"enter the ending number: ";
	cin>>b;
	for(num=a;num<b;num++)//loop will form for the given number
	{
		for(i=2;i<num;i++)//loop created to check whether the number is divisible or not  
		{
			if(num%i==0)//divisible conditon
			break;//if the number is divisible then break the loop
		}
	if(i==num)
		{
	   		cout<<num<<endl;	
		}	
	}
}
