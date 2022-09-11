#define  _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<cstring>
int main()
{
	using namespace std;
 char words[100];
 cout << "Please enter words: " << endl;
 cin >> words;
 int i=0;
 while (strcmp(words,"done")!=0)
 {
	 if(bool(cin>>words)==true)
	 i++;
 }
 cout << endl << "You entered a total of " << i << " words." << endl;
	system("pause");
	return 0;
}