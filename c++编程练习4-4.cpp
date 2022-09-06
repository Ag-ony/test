#define  _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
int main()
{
	using namespace std;
	string firstname;
	string lastname;
	string wholename;
	cout << "Enter your first name:  ";
	getline(cin, firstname);
	cout << "Enter your last name: ";
	getline(cin, lastname);
	wholename = lastname + "," + firstname;
	cout << "Here's the information in a single string :" << wholename;

	system("pause");


	return 0;
}