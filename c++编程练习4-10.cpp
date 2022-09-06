#define  _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<array>
int main()
{
	using namespace std;
	cout << "please enter your 50 meters greads\n ";
	const int number = 3;
	array<double, number>grade;
	cout << "The 1st grade: ";
	cin >>grade[0];
	cout << "The 2 grade: ";
	cin >> grade[1];
	cout << "The 3 grade: ";
	cin >> grade[2];
	cout << "you have " << number << " grades:\n";
	cout << "the 1st: " << grade[0] << endl;
	cout << "the 2nd: " << grade[1] << endl;
	cout << "the 3rd: " << grade[2] << endl;
	cout << "And your avery grade is:  "
		<< (grade[0] + grade[1] + grade[2]) / 3 << endl;





	system("pause");
	return 0;
}