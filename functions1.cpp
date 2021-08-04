#include<iostream>
#include<math.h>
using namespace std;
int i;
int n,m;

bool isprime(int num)
{
	for(i=2;i<=sqrt(num);i++)
	{
		if(num%i==0)
		{
			return false;
		}
	}
	return true;
}




int main()
{
	cout<<"enter the 1st number: ";
	cin>>n;
	cout<<"enter the 2nd number: ";
	cin>>m;
	for(i=n;i<=m;i++)
	{
		if(isprime(1))
		{
			cout<<i<<endl;
		}
	}
	return 0;	
}
