#include <iostream>

// ���������������ֵ����Լ��
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

// ���������������ֵ���С������
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int num1, num2;
    std::cin >> num1 >> num2;

    int greatestCommonDivisor = gcd(num1, num2); // ���ú��������Լ��
    int leastCommonMultiple = lcm(num1, num2);   // ���ú�������С������

    std::cout << greatestCommonDivisor << std::endl;
    std::cout << leastCommonMultiple << std::endl;

    return 0;
}
