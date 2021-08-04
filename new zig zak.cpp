#include<iostream>
using namespace std;
int main()
{
	int i; int j; int n;
	int a; int b;
	cout<<"enter the number of rows: ";
	cin>>a;
	cout<<"enter the number of columns: ";
	cin>>b;
	cout<<"enter the number of elements: ";
	cin>>n;
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=b;j++)
		{
			if(((i+j)%4==0) || (i==2 && j%4==0))
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
