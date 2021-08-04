//half inverted pyramid using numbers

#include<iostream>
using namespace std;
int main ()
{
	int n;
	int i,j;
	cout<<"enter the number of elements: ";
	cin>>n;
	for(i=n;i>=1;--i)
	{
		for(j=1;j<=i;++j)
		{
			cout<<j<<" ";
		}
		cout<<endl;
	}
	return 0;
}
