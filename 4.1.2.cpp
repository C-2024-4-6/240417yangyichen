#include <iostream>
using namespace std;
void bubblesort(double* a[10])
{
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < 9; j++)
		{
			if (*a[j] > *a[j + 1])
			{
				double e = *a[j];
				*a[j] = *a[j + 1];
				*a[j + 1] = e;
				changed = true;
			}
		}	
	} 
	while (changed);
}
int main()
{
	double li[10];
	double* li_a[10];
	cout << "请输入十个数：";
	for (int i = 0; i < 10; i++)
	{
		double b;
		cin >> b;
		li[i] = b;
	}
	for (int c = 0; c < 10; c++)
	{
		li_a[c] = &li[c];
	}
	bubblesort(li_a);
	cout << "从小到大排序为：";
	for (int j = 0; j < 10; j++)
	{
		cout << li[j] << '\t';
	}
	return 0;
}
