#include<iostream>
using namespace std;
int& gys(int x, int y)
{
	int z;
	for (int i = 1; i <= x || i <= y; i++)
	{
		if ((x % i == 0) && (y % i == 0))
			z = i;
	}
	return z;
}
int& gbs(int x, int y)
{
	int z;
	for (int i = x; i <= (x * y); i++)
	{
		if ((i % x == 0) && (i % y == 0))
		{
			z = i;
			break;
		}
	}
	return z;
}
int main()
{
	int m, n;
	cout << "��������Ȼ��m��n��" << endl;
	cin >> m >> n;
	int GYS = gys(m, n);
	int GBS = gbs(m, n);
	cout << "���ǵ����Լ���ǣ�" << GYS << endl;
	cout << "���ǵ���С�������ǣ�" << GBS << endl;
	return 0;
}