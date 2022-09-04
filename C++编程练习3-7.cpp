#define  _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int main()
{
	cout << " Enter your litro cost in Europe every 100 kilometers:";
	float Gs;
	cin >>Gs;
	float Gy, Gl, s, Yl, Jl,mpg;
	const double s_per_JL=3.785;
	Gl = Gs / s_per_JL;
	const double Gl_per_Yl = 62.14;
	Yl = Gl_per_Yl;
	mpg = Yl/ Gl;
	cout << Gs << "L/100km=" << mpg << "mpg";



	system("pause");
	return 0;

}