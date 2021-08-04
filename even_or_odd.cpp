// to find that the entered number is a even number or a odd one .
 #include<iostream>
 using namespace std;
 int main()
 {
 	int a,b;
 	cout << "Enter the number which needs to be checked: ";
 	cin >> a;
 	b = a%2;
 	if ( b ==0 )
 	{
 		cout << "The entered number is an even number.";
	}
	else
	{
		cout << "The entered number is a odd number.";
	}
 }
