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
	cout << "修改后的坐标为：" << "(" << x << "," << y << ")" << endl;
}
int main()
{
	int i, j;
	cout << "修改x值为：";
	cin >> i;
	cout << "修改y值为：";
	cin >> j;
	Point point;
	point.setPoint(i, j);
	point.display();
	return 0;
}