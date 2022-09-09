#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
double a(double);
int main()
{
	double GN;
	cout << "Enter the number of light years :";
	cin >> GN;
	double TW;
	TW = a(GN);
	cout << GN  << "light years =" << TW << "astromical units \n";

	return 0;
}

double a(double GN)
{
	using namespace std;
	double TW;
	TW = 63240 * GN;
	return TW;
}