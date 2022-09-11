#define  _CRT_SECURE_NO_WARN
#include<iostream>
#include<string>
int main() 
{
	using namespace std;
	struct car 
	{
		string brand;
		int year;
	};
	cout << "How many cars do you wish to catalog: ";
	int cars;
	cin >> cars;
	car* user =new car[cars];
	for (int i = 0; i < cars; i++)
	{
		cout << "car #" << i + 1 << endl;
		cout << "Please enter the make : ";
		cin.get();
		getline(cin, user[i].brand);
		cout << "Please enter the year made : ";
		cin >> user[i].year;
	}
	cout << "Here is your information: \n";
	for (int i = 0; i < cars; i++) 
		cout << (*(user + i)).year << " " << (*(user + i)).brand << endl;
	system("pause");
	return 0;
}