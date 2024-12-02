#include <iostream>
using namespace std;
int main()
{
	double a[10], b;
	int n = 0;
	cout << "Enter ten numbers:" ;
	for (int i = 1; i < 10; i++)
	{
		cin >> b;
		if (i == 1)
		{
			a[n] = b;
			n++;
		}
		else
		{
			for (int j = 0; j < n; j++)
			{
				if (a[j] == b)
					break;
				else
				{
					if (j == (n - 1) && (a[n - 1] != b))
					{
						a[n] = b;
						n++;
					}
				}
			}
		}
	}
	cout << "The distinct numbers are:" ;
	for (int k = 0; k < n; k++)
	{
		cout << a[k] << endl;
	}
	return 0;
}