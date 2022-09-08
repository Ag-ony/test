#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<array>
int main()
{
	using namespace std;
	const int Arsize = 101;
	array<long double, Arsize> factorials;
	int i;
	factorials[1] = factorials[0] = 1;
	for (i = 2; i < Arsize; i++)
		factorials[i] = i * factorials[i - 1];
	i = i - 1;
	cout << i << "! = " << factorials[i] << endl;
	system("pause");
	return 0;
}