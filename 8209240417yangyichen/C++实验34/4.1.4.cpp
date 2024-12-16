#include <iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	int i = 0, j = 0, k = 0;
	while (i < size1 && j < size2)
	{
		if (list1[i] < list2[j])
		{
			list3[k++] = list1[i++];
		}
		else
		{
			list3[k++] = list2[j++];
		}
	}
	while (i < size1)
	{
		list3[k++] = list1[i++];
	}
	while (i < size2)
	{
		list3[k++] = list2[j++];
	}
}
int main()
{
	const int max = 80;
	int list1[max];
	int list2[max];
	int list3[max * 2];
	int size1, size2;

	cout << "请输入第一个数组的元素数：";
	cin >> size1;
	cout << "Enter list1:";
	for (int i = 0; i < size1; i++)
	{
		cin >> list1[i];
	}
	cout << "请输入第二个数组的元素数：";
	cin >> size2;
	cout << "Enter list2:";
	for (int i = 0; i < size2; i++)
	{
		cin >> list2[i];
	}
	merge(list1, size1, list2, size2, list3);

	cout << "The merged list is：";

	for (int i = 0; i < size1 + size2; i++)
	{
		cout << list3[i] << " ";
	}
	cout << endl;
	return 0;
}