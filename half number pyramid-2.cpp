//half inverted pyramid using numbers
#include<iostream>
using namespace std;
int main()
{
	int n;
	int i,j;
	cout<<"enter the number of elements: ";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i+1;j++)
		{
			cout<<i<<" ";
		}
		cout<<endl;
	}
	return 0;
}
