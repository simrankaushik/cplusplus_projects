#include <iostream>
#include<conio.h>
using namespace std;
long fact(int n)
{
	if (n == 0)
	{
	return 1;
}
	else
	{
		return (n*fact(n-1));
	}
}
int main()
{
	int num;
	cout << " enter the number: ";
	cin >> num;
	cout <<  "the factorial of " << num << "is " << fact(num);
}
