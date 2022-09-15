#define  _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cctype>
int main()
{
	using namespace std;
	cout << "Please enter one of the following choices\n";
	cout << "c) carniuore " << " p) pianist" << endl;
	cout << "t) tree" << " g) game" << endl;
	cout << "f" << endl;
	char menu;
	cin.get(menu);
	while (isalpha(menu))
	{
		switch(menu)
		{
		case'c':cout << "A maple is carnivore" << endl;
			break;
		case'p':cout << "A maple is pianist" << endl;
			break;
		case't':cout << "A maple is tree" << endl;
			break;
		case'g':cout << "A maple is game" << endl;
			break;
		default:cout << "Please enter a c,p,t,or g:  ";
			cin.ignore();

		}

		cin.get(menu);


	}




	system("pause");
	return 0;
}