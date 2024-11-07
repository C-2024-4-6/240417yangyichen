#include <iostream>
using namespace std;

int main()
{
    double num1, num2;
    char op;
    cout << "��������ʽ��num1 ����� num2��: ";
    cin >> num1 >> op >> num2;

    switch (op)
    {
    case '+':
        cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
        break;
    case '-':
        cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
        break;
    case '*':
        cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
        break;
    case '/':
        if (num2 == 0)
        {
            cout << "��������Ϊ0��" << endl;
        }
        else
        {
            cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
        }
        break;
    case '%':
    {
        int intNum1 = static_cast<int>(num1);
        int intNum2 = static_cast<int>(num2);
        if (num2 == 0)
        {
            cout << "��������Ϊ0��" << endl;
        }
        else
        {
            cout << intNum1 << " % " << intNum2 << " = " << intNum1 % intNum2 << endl;
        }
    }
    break;
    default:
        cout << "�Ƿ����������" << endl;
    }

    return 0;
}