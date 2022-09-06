#define  _CRT_SECURE_NO_WARNINGS
#include<iostream>
struct CandBar{
	char brand[20];
	float weight;
	int caloie;
};
int main()
{
	using namespace std;
	CandBar snack[3] = {
		{"Mocha Munch",2.3,350},
		{"fruit salad",39.5,120},
		{"chicken",55.5,600}
	};
	cout << "The snack is flowing :\n ";
	cout << "brand: " << snack[0].brand << endl;
	cout << "weight: " << snack[0].weight << endl;
	cout << "caloie: " << snack[0].caloie << endl;
	cout << "brand: " << snack[1].brand << endl;
	cout << "weight: " << snack[1].weight << endl;
	cout << "caloie: " << snack[1].caloie << endl;
	cout << "brand: " << snack[2].brand << endl;
	cout << "weight: " << snack[2].weight << endl;
	cout << "caloie: " << snack[2].caloie << endl;
	system("pause");
	return 0;
}