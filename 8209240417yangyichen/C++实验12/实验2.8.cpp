#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a, Xn, Xnp1;//Xnp1��ΪXn+1
	cout << "������a��ֵ";
	cin >> a;
	Xn = a;
	if (a >= 0)
	{
		for (; 1;)
		{
			Xnp1 = (1.0 / 2) * (Xn + (a / Xn));
			if (fabs(Xnp1 - Xn) < 0.00001)
			{
				cout << "a��ƽ����Ϊ��" << Xnp1 << endl;
				break;
			}
			Xn = Xnp1;
		}

	}
	else
	{
		cout << "a<0ʱ��ƽ��û������" << endl;
	}
	
	return 0;

}