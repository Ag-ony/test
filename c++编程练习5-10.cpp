#define  _CRT_SECURE_NO_WARNINGS
#include<iostream>
int main()
{
	using namespace std;
	cout << "How many rows do you want to enter: ";
	int row;
	cin >> row;
	int i;
	for ( i= 1; i <= row; i++)
	{
		int j ;
		int k;
		for (j = 1; j <=(row - i); j++)
		cout << ".";
		for (k = 1; k <=i; k++)
		cout << "*";
		cout << endl;
	}
	system("pause");
	return 0;
}