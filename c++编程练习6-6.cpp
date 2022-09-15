#define  _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<Cstring>
int main()
{
	using namespace std;
	struct donation 
	{
		string name;
		double money;
	};
	int num;
	cout << "Please enter the number of dollers: ";
	cin >> num;
	donation* d =new donation[num];
	int bigger = 0;
	for (int i = 0; i < num; i++)
	{
		cout << "Enter your name and money: ";
		cin >> d[i].name;
		cin >> d[i].money;
		if (d[i].money > 10000)
		{
			bigger++;
		}
	}
	if (bigger > 0 && bigger < num)
	{ 
		cout << "Grand Patrons!";
		for (int i = 0; i < num; i++)
		{
			if (d[i].money > 10000)
			{
				cout << d[i].name << "\t" << d[i].money << endl;
			}
		}
		cout << "Patrons" << endl;
		for (int i = 0; i < num; i++)
		{
			if (d[i].money <= 10000)
			{
				cout << d[i].name << "\t" << d[i].money << endl;
			}
		}
	}

	if (bigger == 0)
	{
		cout << "Grand Patrons" << endl;
		cout << "none" << endl;
		cout << "Patrons" << endl;
		for (int i = 0; i < num; i++)
		{
			if (d[i].money <= 10000)
			{
				cout << d[i].name << "\t" << d[i].money << endl;
			}
		}
	}

	if (bigger == num)
	{
		cout << "Grand Patrons" << endl;
		for (int i = 0; i < num; i++)
		{
			if (d[i].money > 10000)
			{
				cout << d[i].name << "\t" << d[i].money << endl;
			}
		}
		cout << "Patrons" << endl;
		cout << "none" << endl;
	}
	delete[]d;




	system("pause");
	return 0;
}