#define  _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Box {

	

public:
	double l, w, h;
	/*Box(double setL, double setW, double setH)
	{
		this->l = setL;
		this->h = setH;
		this->w = setW;
	}*/
	double get(void);
	void set(double setL, double setH, double setW);
};
	double Box::get(void) {
		return (l * w + l * h + w * h) * 2;

	}
	void Box::set(double setL, double setH, double setW) {
		l = setL;
		w = setW;
		h = setH;

	}


int main()
{
	Box Box1;
	Box Box2;
	Box Box3;
	double area = 0.0;

	Box1.l = 20;
	Box1.w = 15.5;
	Box1.h = 8.8;


	Box2.l = 17;
	Box2.w = 11.5;
	Box2.h = 6.6;

	area = (Box1.h * Box1.l + Box1.h * Box1.w + Box1.w * Box1.l) * 2;
	cout << "第一个盒子的表面积为" << area << endl;


	area = (Box2.h * Box2.l + Box2.h * Box2.w + Box2.w * Box2.l) * 2;
	cout << "第二个盒子的表面积为" << area << endl;


	Box3.set(52.0, 13.1, 4);
	area = Box3.get();
	cout << "第三个盒子的表面积为" << area << endl;

	system("pause");
	return 0;
}

