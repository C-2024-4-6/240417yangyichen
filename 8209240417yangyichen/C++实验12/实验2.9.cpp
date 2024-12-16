#include<iostream>
using namespace std;
int main()
{
	double price = 0.8, total = 0;
	int number = 2, day = 0;
	double average;
	for (int i = 1; number <= 100; i++)
	{
		day++;
		total += price * number;
		number *= 2;
	}
	average = total / day;
	cout << "平均每天买" << average << "元" << endl;
	return 0;
}