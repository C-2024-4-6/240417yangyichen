#include <iostream>
using namespace std;
void sort_arr(int arr[], int length)
{
	int min, min_index;

	for (int i = 0; i < length - 1; i++)
	{
		for (int j = i; j < length; j++)
		{
			if (j == i)
			{
				min = arr[j];
				min_index = j;
			}
			if (arr[j] < min)
			{
				min = arr[j];
				min_index = j;
			}
		}
		int temp;
		temp = arr[i];
		arr[i] = arr[min_index];
		arr[min_index] = temp;
	}
}
int main()
{
	int size;
	cout << "请输入元数个数：";
	cin >> size;
	int* arr = new int[size];
	cout << "请依次输入 " << size << " 个整数: ";
	for (int i = 0; i < size; i++) 
	{
		cin >> arr[i];
	}
	sort_arr(arr, size);
	cout << "排序后的数组元素为: ";
	for (int i = 0; i < size; i++) 
	{
		cout << *(arr + i) << " ";
	}
	cout << endl;

	delete[] arr;
	arr = nullptr;

	return 0;
}