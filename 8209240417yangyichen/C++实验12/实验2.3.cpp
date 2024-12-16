#include<iostream>
using namespace std;
int main()
{
	double a,b,c,C;
	cout << "输入三角形的三边a,b,c" << endl;
	cin >> a>> b >> c;
	if (a + b > c && a + c > b && b + c > a)
	{
		C = a + b + c;
		cout << "C=" << C << endl; 
		if ((a == b && a != c) || (a == c && a != b) || (b == c && b != a))
		{
			cout << "这是一个等腰三角形" << endl;
		}
	
	}
	else 
	{
		cout << "这三条边不能构成三角形" << endl;

	}
	
	return 0;
}