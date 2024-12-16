#include <iostream>
#include"student.h"           
void Student::display()         //在类外定义display类函数
{
    cout << "num:" << num << endl;
    cout << "name:" << name << endl;
    cout << "sex：" << sex << endl;
}