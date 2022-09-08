#define  _CRT_SECURE_NO_WARNINGS
#include<iostream>
int main()
{
	using namespace std;
	int number;
	int sum = 0;
	cout << "please enter number that you like: \n";
	cin >> number;
	for(;number!=0;cin>>number){
		sum = sum+number;
		cout << "Now,the total number is: " << sum;
	}
	cout << "Done\a\n";
	system("pause");
	return 0;
}