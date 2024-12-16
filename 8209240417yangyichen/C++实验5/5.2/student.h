#include <iostream>
using namespace std;
class Student              //类声明
{
public:                   //公用成员函数原型声明
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
