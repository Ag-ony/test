#define  _CRT_SECURE_NO_WARNINGS
#include<iostream>
int main()
{
	using namespace std;
	cout << "请输入你的年龄" << endl;
	int age;
	cin >> age;
	int month;
	month = 12 * age;
	cout << "你的年龄的月份是" << month << endl;


	return 0;
}