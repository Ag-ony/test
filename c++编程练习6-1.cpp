#define  _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main()
{
	cout << " Enter your input , @ is over" << endl;
	char ch;
	cin.get(ch);
	while(ch!='@')
	{
		if (isupper(ch))
		{
			ch = tolower(ch);
		}
		else if (islower(ch))
		{
			ch = toupper(ch);
		}
		if (isdigit(ch)==false)
		{
			cout << ch;
		}
		cin.get(ch);
	}
	cout << endl;


	system("pause");
	return 0;
}