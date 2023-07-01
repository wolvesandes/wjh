#include <iostream>

// 函数计算两个数字的最大公约数
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

// 函数计算两个数字的最小公倍数
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int num1, num2;
    std::cin >> num1 >> num2;

    int greatestCommonDivisor = gcd(num1, num2); // 调用函数求最大公约数
    int leastCommonMultiple = lcm(num1, num2);   // 调用函数求最小公倍数

    std::cout << greatestCommonDivisor << std::endl;
    std::cout << leastCommonMultiple << std::endl;

    return 0;
}
