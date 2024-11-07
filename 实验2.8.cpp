#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a, Xn, Xnp1;//Xnp1即为Xn+1
	cout << "请输入a的值";
	cin >> a;
	Xn = a;
	if (a >= 0)
	{
		for (; 1;)
		{
			Xnp1 = (1.0 / 2) * (Xn + (a / Xn));
			if (fabs(Xnp1 - Xn) < 0.00001)
			{
				cout << "a的平方根为：" << Xnp1 << endl;
				break;
			}
			Xn = Xnp1;
		}

	}
	else
	{
		cout << "a<0时开平方没有意义" << endl;
	}
	
	return 0;

}