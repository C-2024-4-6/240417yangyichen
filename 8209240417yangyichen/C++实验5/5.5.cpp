#include <iostream>
using namespace std;
class Point
{
private:
	int x;
	int y;
public:
	Point()
	{
		x = 60;
		y = 80;
	}
	void setPoint(int i, int j);
	void display();
};
void Point::setPoint(int i, int j)
{
	x = x + i;
	y = y + j;
}
void Point::display()
{
	cout << "�޸ĺ������Ϊ��" << "(" << x << "," << y << ")" << endl;
}
int main()
{
	int i, j;
	cout << "�޸�xֵΪ��";
	cin >> i;
	cout << "�޸�yֵΪ��";
	cin >> j;
	Point point;
	point.setPoint(i, j);
	point.display();
	return 0;
}