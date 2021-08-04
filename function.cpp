#include<iostream>
using namespace std;


 int z; // declare a global variable z
// this will hold the factorial value

int fact(int i)
{
	
	z = 1;
	for(int m =1;m<=i;m++)
	{
		z = z*m;
	}
	return z;
}

int main(void)
{
	int n; // n will store the number entered by the user
	int result;
	cout <<"Enter the number: ";
	//printf("Eter the number:");
	cin >> n;
	//scanf("%d",&n);
	if(n==0 || n==1)
	{
	 	cout <<"The factorial is: 1";
	}
	else
	{
		result = fact(n); // call the function fact
		cout << "The fatorial of the number is: " <<result;
	}
}
	
	


