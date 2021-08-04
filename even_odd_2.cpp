#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the number which needs to be checked: ");
	scanf("%d",&a);
	b = a%2;
	if( b==0 )
	{
		printf("the entered number is an even number.");
	}
	else
	{
		printf("the entered number is a odd number.");
	}
}
