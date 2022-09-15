#define  _CRT_SECURE_NO_WARNINGS
#include<Iostream>

#include<cctype>
int main()
{
	using namespace std;
	cout << "please enter your income :";
	double income;
	while(cin>>income)
	{
		if (income > 0 && income <= 5000)
			cout << income <<"tvarp" << endl;
		else if (income > 5000 && income <= 15000)
			cout << (income - 5000) * 0.1 <<"tvarp" << endl;
		else if (income > 15000 && income <= 35000)
			cout << 10000 * 0.1 + (income - 15000) * 0.15 <<"tvarp" <<endl;
		else if (income > 35000)
			cout << 10000 * 0.1 + 20000 * 0.15 + (income - 35000) * 0.2 << "tvarp";
		break;

	}

	system("pause");
	return 0;

}


//ÔËÓÃswitch

/*
#include "stdafx.h"
#include <iostream>

int main()
{
	using namespace std;

	cout << "Please enter your income to calculate the tax:";
	double income;
	double tax;
	int flag;
	double a1 = 0.1;
	double a2 = 0.15;
	double a3 = 0.2;

	while (cin >> income)
	{
		if (income >= 0)
		{
			if (income <= 5000)
				flag = 0;
			else if (5000 < income && income <= 15000)
				flag = 1;
			else if (15000 < income && income <= 35000)
				flag = 2;
			else if (35000 < income)
				flag = 3;
			switch (flag)
			{
			case 0: tax = 0;
				break;
			case 1: tax = (income - 5000) * a1;
				break;
			case 2: tax = ((income - 15000) * a2) + 1000;
				break;
			case 3: tax = ((income - 35000) * a3) + 4000;
				break;
			}
			cout << "Your tax is: " << tax << endl;
			cout << "Please enter next income:";
		}
		else if (income < 0)
		{
			cout << "Input fail.\nBye!\n";
			break;
		}
	}
	if (cin.fail())
		cout << "Input fail.\nBye!\n";

	system("pause");
	return 0;
}*/