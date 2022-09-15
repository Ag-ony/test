#define  _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cctype>
#include<string>
using namespace std;
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;


	cout << "Enter words (q to quit) ";
	string words;
	cin >> words;
	while (words!="q")
	{
		if (isalpha(words[0]))
		{
			if (words[0] == 'a' || words[0] == 'e' || words[0] == 'i' || words[0] == 'o' || words[0] == 'u')
				a++;
			else
				b++;
		}
		else
		{
			c++;
		}
		cin >> words;
	}
	cin >> words;
	cout << a<< " words beginning with vowels" << endl;
	cout << b << " words beginning with consonants" << endl;
	cout << c << " others" << endl;




	system("pause");
	return 0;
}