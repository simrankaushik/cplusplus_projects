//solid rectangle
#include<iostream>
using namespace std;
int main()
{
	int a,b;
	int i,j;
	cout<<"enter the number of rows: ";
	cin>>a;
	cout<<"enter the number of columns: ";
	cin>>b;
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=b;j++)
		{
			cout<<"*";
		}
		cout<<endl;
		cout<<"\n";
	}
	return 0;
}
