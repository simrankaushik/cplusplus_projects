#include<iostream>
using namespace std;
int main()
{
	int rows,col;
	int i,j;
	cout <<"enter the number of rows: ";
	cin>>rows;
	cout<<"enter the number of columns: ";
	cin>>col;//counting in c++ starts from 0.
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=col;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;	
}
