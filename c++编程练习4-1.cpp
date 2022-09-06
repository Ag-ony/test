#define  _CRT_SECURE_NO_WARNINGS

#include<iostream>
using namespace std;
int main()
{
	int age;
	char firstname[100];
	char lastname[100];
	char grade;
	cout << "what is your first name ? ";
	cin.getline(firstname, 100);
	cout << "what is your last neme ? ";
	cin.getline(lastname, 100);
	cout << "what letter grade do you deserve? ";
	cin >> grade;
	grade = grade + 1;
	cout << "what is your age?";
	cin >> age;
	cout << "name:" << lastname << "," << firstname << endl;
	cout << "grade:" << grade << endl;
	cout << "age:" << age << endl;
	return 0;
}




