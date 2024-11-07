#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout << "ÊäÈëÒ»¸ö×ÖÄ¸£º" << endl;
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