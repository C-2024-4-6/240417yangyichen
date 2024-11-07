#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;
    cout << "����������������: ";
    cin >> a >> b;
    int greatestCommonDivisor = gcd(a, b);
    int leastCommonMultiple = (a * b) / greatestCommonDivisor;
    cout << "���Լ����: " << greatestCommonDivisor << endl;
    cout << "��С��������: " << leastCommonMultiple << endl;
    return 0;
}