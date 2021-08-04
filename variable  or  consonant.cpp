//write a program to verify that the entered alphabet is a vowel or a consonant
//using switch statements

#include<iostream>
using namespace std;
int main()
{
	char w;
	cout<<"enter the alphabet: ";
	cin>>w;
	switch(w)
	{
		case 'a':
			cout<<"it is a vowel"<<endl;
			break;
		case 'e':
			cout<<"it is a vowel"<<endl;
			break;
		case 'i':
			cout<<"it is a vowel"<<endl;
			break;
		case 'o':
			cout<<"it is a vowel"<<endl;
			break;
		case 'u':
			cout<<"it is a vowel"<<endl;
			break;
		case 'A':
			cout<<"it is a vowel"<<endl;
			break;
		case 'E':
			cout<<"it is a vowel"<<endl;
			break;
		case 'I':
			cout<<"it is a vowel"<<endl;
			break;
		case 'O':
			cout<<"it is a vowel"<<endl;
			break;
		case 'U':
			cout<<"it is a vowel"<<endl;
			break;
		default:
			cout<<"it is a consonant"<<endl;
			break;
	}
}
