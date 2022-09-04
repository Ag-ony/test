#define  _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int main()
{
	cout << "Enter the world's population: ";
	long long number_w;
	cin >> number_w;
	cout << "Enter the population of the US:";
	long long number_us;
	cin >> number_us;
	float data;
	data = float(number_us) / float(number_w) * 100;
	cout << "The population of the US is " << data << "%  of the world population ";
	system("pause");
	return 0;

}