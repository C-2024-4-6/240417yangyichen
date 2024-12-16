#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double f;
	cout << "输入华氏温度：";
	cin >> f;
	double c = ((5 / 9.0 * (f - 32)) + 0.5);
	cout << "摄氏温度为：" << fixed << setprecision(2) << c << endl;
	cout << c << endl;
	return 0;
}