#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout << "����һ����ĸ��" << endl;
	cin >> ch;
	if (ch >= 'a' && ch <= 'z')
	{
		ch -= 32;
		cout << ch << endl;
	}

	else
		cout << "ASCII:" << ch - 0 << endl;
	return 0;
}