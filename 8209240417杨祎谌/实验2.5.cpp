#include<iostream>
using namespace std;
int main()
{
	char c;
	int letter = 0, space = 0, number = 0, other = 0;
	cout << "������һ���ַ�" << endl;
	while ((c = cin.get()) != '\n')
	{
		if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
			letter++;
		else if (c == ' ')
			space++;
		else if (c >= '0' && c <= '9')
			number++;
		else
			other++;
	}
	cout << "��ĸ�ַ�����Ϊ" << letter << "�ո��ַ�����Ϊ" << space << "�����ַ�����Ϊ" << number << "�����ַ�����Ϊ" << other << endl;
	return 0;
}