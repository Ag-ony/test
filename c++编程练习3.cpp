#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int main()
{
	cout << " enter your heigh: ";
	int height;
	cin >> height;
	const int  Ft_per_in = 12;
	int ft, in;
	ft = height / Ft_per_in;
	in = height % Ft_per_in;
	cout << "That mains you are " << ft << "feet and    " << in << "inches height.";



	return 0;
}