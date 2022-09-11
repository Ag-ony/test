#define  _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
int main()
{
	using namespace std;
	string words;
	cout << "Please enter words that you like ";
	cin >>words;
	int i = 0;
	while (words != "done")
	{
		if (bool(cin >> words) == true);
		i++;
	}
	cout << "You enter a total of " << i << " words";

	system("pause");
	return 0;
}