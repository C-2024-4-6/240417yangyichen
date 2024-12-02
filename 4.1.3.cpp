#include <iostream>
using namespace std;
void change(bool* a, int num)
{
	for (int i = num; i < 100;)
	{
		a[i] = (!a[i]);
		int j = i + 1;
		j += j + 1;
		i = j - 1;
	}
}
int main()
{
	bool a[100];
	for (int i = 0; i < 100; i++)
	{
		a[i] = true;
	}
	for (int i = 1; i < 100; i++)
	{
		change(a, i);
	}
	cout << "开着的存物柜有：" << endl;
	for (int i = 0; i < 100; i++)
	{
		if (a[i] == true)
		{
			cout << (i + 1) << endl;
		}
	}
	return 0;
}