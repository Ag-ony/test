#define  _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int main()
{
	cout << "Enter your feet:_______\b\b\b\b\b\b\b";
	int feet;
	cin >> feet;
	cout << "Enter your inches :__________\b\b\b\b\b\b\b\b";
	int inch;
	cin >> inch;
	cout << "Enter your weight:________\b\b\b\b\b\b\b\b";
	int weight_p;
	cin >> weight_p;
	cout << "So you are " << feet << "feet and" << inch
		<< "inches and " << weight_p << "pounds weight\n";
	const int Ft_per_in = 12;
	int height_inch;
	height_inch = feet * Ft_per_in + inch;
	const double M_per_in = 0.0254;
	double height_meter;
	height_meter = height_inch * M_per_in;
	const double Kg_per_p = 2.2;
	double weight_kg;
	weight_kg = weight_p / Kg_per_p;
	cout << "That means you are " << height_meter << " meters and  "
		<< weight_kg << " kg weight\n";
	double BMI;
	BMI = weight_kg / (height_meter * height_meter);
	cout << "and your BMI are" << BMI;
	system("pause");
	return 0;
}