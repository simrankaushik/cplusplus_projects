//print a hollow rectangle
#include<iostream>
using namespace std;
int main()
{
	int rows,cols;
	int i,j;         
	cout<<"enter the number of rows: ";
	cin>>rows;
	cout<<"enter the number of columns: ";
	cin>>cols;
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=cols;j++)
		{
			if(i==1||i==rows||j==1||j==cols)
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
