#define  _CRT_SECURE_NO_WARNINGS
#include<iostream>
double a(double);
using namespace std;
int main()
{
	double she;
	cout << "�����������¶�" <<endl;
	cin >> she;
	double hua;
	hua = a(she);
	cout << she << "�����¶���" << hua << "�����¶�" << endl;
	return 0;
}
double a(double she)
{
	double hua;
	hua = 1.8 * she + 32;
	return hua;
}