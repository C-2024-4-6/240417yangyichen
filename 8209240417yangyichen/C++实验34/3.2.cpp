#include<iostream>
using namespace std;
bool is_prime(int num)
{
	if (num == 2)
		return true;
	else
	{
		for (int i = 2; i < num; i++)
		{
			if (num % i == 0)
			{
				return false;
			}
		}
		return true;
	}
}
int main()
{
	for (int i = 2, n = 1; i <= 200; i++)
	{
		if (is_prime(i))
		{
			cout << i << '\t';
			if ((n >= 10) && (n % 10 == 0))
			{
				cout << endl;
			}
			n++;
		}
	}
	return 0;
}