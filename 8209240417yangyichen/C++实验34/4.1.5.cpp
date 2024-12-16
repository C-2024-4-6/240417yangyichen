#include <iostream>
using namespace std;
int indexOf(const char s1[], const char s2[])
{
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	if (len1 > len2)
		return -1;
	else
	{
		for (int i = 0; i <= len2 - len1; i++)
		{
			int n = 0;
			for (int k = 0, j = i; k < len1; k++, j++)
			{
				if (s1[k] == s2[j])
					n++;
			}
			if (n == len1)
				return i;
		}
		return -1;
	}
}

int main()
{
	char s1[100], s2[100];
	char i;
	cout << "Enter the first string:";
	cin.getline(s1, 100);
	cout << "Enter the second string:";
	cin.getline(s2, 100);
	int indexof = indexOf(s1, s2);
	cout << "indexof(" << s1 << "," << s2 << ")is" << indexof << endl;
	return 0;
}