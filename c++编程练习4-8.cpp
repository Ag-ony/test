#define  _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
struct william {
	char name[20];
	float diameter;
	float weight;
};
int main()
{
	using namespace std;
	william * PS;
	PS = new  william;
	cout << "Please enter your pizza's information: " << endl;
	cout << "name: ";
	cin.getline(PS->name, 20);
	cout << "diameter: ";
	cin >> PS->diameter;
	cout << "weight: ";
	cin >> PS->weight;
	cout << "The flowing is your piza's information: " << endl;
	cout << "name: " << PS->name << endl;
	cout << "weight: " << PS->weight << endl;
	cout << "diameter: " << PS->diameter << endl;


	system("pause");
	return 0;
}