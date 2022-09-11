#define  _CRT_SECURE_NO_WARNINGS
#include<iostream>
int main()
{
	using namespace std;
	const int month = 12;
	const int year = 3;
	const char* months[month] = {
    "January",
	"February",
	"March",
	"April",
	"May",
	"June",
	"July",
	"August",
	"September",
	"October",
	"November",
	"December"
	};
	int sell[month][year];
	int sum[3] = { 0,0,0 };
	int totalsum = 0;

	for (int i = 0; i < year; i++)
	{
		cout << "The " << i + 1 << "year: " << endl;

		for (int j = 0; j < month; j++)
		{
			cout << months[j] << ":";
			cin >> sell[j][i];
			sum[i] = sum[i] + sell[j][i];

		}
	}
	totalsum= sum[0] + sum[1] + sum[2];
	cout << "The 1st year's saleroom is " << sum[0] << ".\n";
	cout << "The 2nd year's saleroom is " << sum[1] << ".\n";
	cout << "The 3rd year's saleroom is " << sum[2] << ".\n";
	cout << "The total saleroom of the 3 years is " << totalsum << ".\n";
	system("pause");
	return 0;
}