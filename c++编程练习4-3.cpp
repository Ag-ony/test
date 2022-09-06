#define  _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
int main()
{
	using namespace std;
	char firstname[100];
	char lastname[100];
	cout << "Enter your fist name: ";
	cin.getline(firstname,100);
	cout << "Enter your last name:  ";
	cin.getline(lastname, 100);
	strcat(lastname, ",");
	strcat(lastname, firstname);
	cout << "Here's the information in a single string: " << lastname;

	




	return 0;
}