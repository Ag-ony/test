#define  _CRT_SECURE_NO_WARNINGS
#include<iostream>
struct CandBar 
{
	char brand[20];
	float weight;
	int caloie;
};
int main()
{
	using namespace std;
	CandBar snack =
	{
		"Mocha Munch",
		2.3,
		250
	};
	cout << "The snack is flowing:\n ";
	cout << "brand: " << snack.brand << endl;
	cout << "weight: " << snack.weight << endl;
	cout << "caloie: " << snack.caloie << endl;
	system("pause");
	return 0;
}