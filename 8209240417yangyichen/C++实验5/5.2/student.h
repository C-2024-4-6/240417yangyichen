#include <iostream>
using namespace std;
class Student              //������
{
public:                   //���ó�Ա����ԭ������
	void display();
	void set_value()
	{
		cout << "name:";
		cin.getline(name, 20);
		cout << "sex:";
		cin >> sex;
		cout << "num:";
		cin >> num;
	}

private:
	int num;
	char name[20];
	char sex;
};
