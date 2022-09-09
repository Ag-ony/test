#define  _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
void a();
int main()
{
	a();
	return 0;

}
void a()
{
	cout << "Enter the number o hours:";
	int h;
	cin >> h;
	cout << "Enter the number of minutes:";
	int m;
	cin >> m;
	cout << "time:" << h << ":" << m;


}