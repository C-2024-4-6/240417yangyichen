#include <iostream>
using namespace std;
int peaches(int n)
{
	int t;
	if (n == 10)
	{
		t = 1;
	}
	else
		t = (peaches(n + 1) + 1) * 2;
	return(t);
}
int main()
{
	cout << "��һ����ӹ�ժ��" << peaches(1) << "������" << endl;
	return 0;
}