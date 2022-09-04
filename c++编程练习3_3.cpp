#define  _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int main()
{
	cout << "Enter a latitude in degrees,minutes,and seconds\n";
	cout << "First , enter athe degree:";
	int degree;
	cin >> degree;
	cout << "Next ,enter the minutes of arc:";
	int minute;
	cin >> minute;
	cout << "Enter the seconds of arc :";
	int second;
	cin >> second;
	const int convert = 60;
	double latitude;
	latitude = degree + double(minute) / convert + double(second) / convert / convert;
	cout << degree << "degree, " << minute << "  minutes,"
		<< second << "seconds=" << latitude << "degrees";
	system("pause");
	return 0;
}