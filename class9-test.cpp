#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;
class point
{
private:
	int m_X;
	int m_Y;
public:
	void setm_x(int x)
	{
		m_X = x;
	}
	int getm_x()
	{
		return m_X;
	}
	void setm_y(int y)
	{
		m_Y = y;
	}
	int getm_y()
	{
		return m_Y;
	}
};
class Circle
{
private:
	int m_R;
	point Center;
public:
	void setm_r(int r)
	{
		m_R = r;
	}
	int getm_r()
	{
		return m_R;
	}

	void set_center(point center)
	{
		Center = center;
	}
	point get_center()
	{
		return Center;
	}
};
void Locate(Circle& c, point& p)
{
	int distance = (c.get_center().getm_x() - p.getm_x()) * (c.get_center().getm_x() - p.getm_x()) +
		(c.get_center().getm_y() - p.getm_y()) * (c.get_center().getm_y() - p.getm_y());
	int R_distance = c.getm_r() * c.getm_r();
	if (distance == R_distance)
	{
		cout << "点在圆上" << endl;
	}
	else if (distance > R_distance)
	{
		cout << "点在圆外" << endl;
	}
	else
	{
		cout << "点在圆内" << endl;
	}
}
int main()
{
	
	Circle C;
	C.setm_r(10);
	point p;
	p.setm_x(10);
	p.setm_y(0);
	C.set_center(p);
	
	point p1;
	p1.setm_x(10);
	p1.setm_y(11);
	Locate(C, p1);
	system("pause");
	return 0;
}
