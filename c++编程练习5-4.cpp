#define  _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int main() {

	int year;
	double money[2] = { 100,100 };
	cout << "At first,Daphne and Cleo both have 100$" << endl;
	for (year = 0; money[0] >= money[1]; year++)
	{
		money[0] = 0.1 * 100 + money[0];
		money[1] = 0.05 * money[1] + money[1];
	}
	cout << year << "  years later Cleo will have more money than Daphne.\n";
	cout << "Now,Daphne have" << money[0] << "money.\n";
	cout << "Now,Cleo have " << money[1] << "money.";

	system("pause");
	return 0;
}