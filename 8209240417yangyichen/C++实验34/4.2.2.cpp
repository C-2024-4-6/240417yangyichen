#include <iostream>
using namespace std;
int parseHex(const char* const hexString)
{
	int string = 0;
	int len = strlen(hexString);
	for (int i = 0; i < len; i++)
	{
		int num;
		if (65 <= int(hexString[i]) && int(hexString[i]) <= 70)
		{
			num = int(hexString[i]) - 55;
		}
		else
			num = int(hexString[i]) - 48;
		string = string + num * (pow(16, (len - i - 1)));
	}
	return string;
}
int main()
{
	char hexString[100];
	char* hexString_ip = hexString;
	cout << "请输入一个16进制数:";
	cin.getline(hexString, 100);
	cout << "转化为10进制数是：" << parseHex(hexString_ip) << endl;
	return 0;
}
