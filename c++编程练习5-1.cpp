#define  _CRT_SECURE_NO_WARNINGS
#include<iostream>
int main()
{
	using namespace std;
	cout << "Please enter two number :\n";
	cout << "The min one :";
	int i;
    cin >> i;
	cout << "The max one: ";
	int j;
	cin >> j;
	int sum = 0;
	for (i = i; i <= j; i++)
	{
		sum = sum + i;
	}
	cout << "The anser is: " << sum << endl;




	system("pause");
	return 0;
}