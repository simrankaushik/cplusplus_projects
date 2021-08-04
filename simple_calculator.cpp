//write a program to have a simple calculator

#include<iostream> 
using namespace std;
int  main()
{
	int a,b;
	char op;
	cout<<"enter the two numbers: ";
	cin>>a>>b;
	cout<<"enter the operator: ";
	cin>>op;
	switch(op)
	{
		case '+':
			cout<<a+b<<endl;
			break;
		case '-':
			cout<<a-b<<endl;
			break;
		case '*':
			cout<<a*b<<endl;
			break;
		case '/':
			cout<<a/b<<endl;//remainder
			break;
		default:
			cout<<"operator not formed,try again";
			break;
	}
}
