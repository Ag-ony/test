#define  _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;
int main()
{
	double donation[11];
	int sum=0;
	int i;
	int num = 0;
	double avergy;
	cout << "Please enter your input: ";
	for (i = 0; i < 10; i++)
	{
		cin >> donation[i];
		if (cin.fail())
		{
			cout << "Not a digit !\n";
			break;

		}
		sum += donation[i];
	
	}
	avergy = sum / i;
	for (i = 0; i < 10; i++)
	{
		if (donation[i]>avergy)
		{
			num++;
		}
	}
	cout << "The avergy is:" << avergy << endl;
	cout << "And there is " << num << "numbers > avergy" << endl;
	system("pause");
	return 0;
}