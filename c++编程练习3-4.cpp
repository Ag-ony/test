#define  _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int main()
{
	cout << "Enter the number of seconds :";
	long sec;
	cin >> sec;
	const int Min_per_sec = 60;
	const int H_per_min = 60;
	const int D_per_h = 24;
	int s, min, h, d;
	s = sec % Min_per_sec;
	int zh;
	zh = sec / Min_per_sec;
	min = zh % H_per_min;
	zh = zh / H_per_min;
	h = zh % D_per_h;
	d = zh / D_per_h;
	cout << sec << " seconds = " << d << "days,  " << h << " hours,  " << min << " minutes, "
		<< s << "  seconds ";
	system("pause");



 return 0;

}