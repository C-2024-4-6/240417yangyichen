#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double f;
	cout << "���뻪���¶ȣ�";
	cin >> f;
	double c = ((5 / 9.0 * (f - 32)) + 0.5);
	cout << "�����¶�Ϊ��" << fixed << setprecision(2) << c << endl;
	cout << c << endl;
	return 0;
}