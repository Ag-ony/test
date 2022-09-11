#define  _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int main()
{
	const int num = 12;
	int sell[num];
	int total = 0;
	const char* months[12] = {
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
	for (int i = 0; i < num; i++) {
		cout << months[i] << ":";
		cin >> sell[i];
		total += sell[i];

	};
	cout << "12 months total sell " << total << " books";

	system("pause");
	return 0;
}