#include<iostream>
using namespace std;
int main()
{
	double a,b,c,C;
	cout << "���������ε�����a,b,c" << endl;
	cin >> a>> b >> c;
	if (a + b > c && a + c > b && b + c > a)
	{
		C = a + b + c;
		cout << "C=" << C << endl; 
		if ((a == b && a != c) || (a == c && a != b) || (b == c && b != a))
		{
			cout << "����һ������������" << endl;
		}
	
	}
	else 
	{
		cout << "�������߲��ܹ���������" << endl;

	}
	
	return 0;
}