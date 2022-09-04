#define  _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int main()
{
	cout << "Enter the kilometers:";
	float km;
	cin >> km;
	cout << "Enter the litros:";
	float litro;
	cin >> litro;
	float eux;
	eux = litro / (km/100);
	cout << "Every 100 kilometers cost " << eux << "   litro  gas in Europe\n";





		system ("pause");
		return 0;
}
