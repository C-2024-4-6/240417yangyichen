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
    cout << "请输入两个正整数: ";
    cin >> a >> b;
    int greatestCommonDivisor = gcd(a, b);
    int leastCommonMultiple = (a * b) / greatestCommonDivisor;
    cout << "最大公约数是: " << greatestCommonDivisor << endl;
    cout << "最小公倍数是: " << leastCommonMultiple << endl;
    return 0;
}