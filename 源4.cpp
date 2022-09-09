#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
void a();
void b();
using namespace std;
int main()
{
	 a();
	 a();
	 b();
	 b();



	return 0;
}
void a()
{
	cout << "three blind mice" << endl;
}
void b()
{
	cout << "see how they run" << endl;

}