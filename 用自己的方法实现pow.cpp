#include <iostream>
#include <cmath>

double myPow(double x, int n) {
    if (n == 0) {
        return 1.0;
    }

    double result = 1.0;
    long absN = std::fabs(static_cast<long>(n)); // 使用long类型来处理INT_MIN的情况

    while (absN > 0) {
        if (absN % 2 != 0) { // 如果n为奇数
            result *= x;
        }
        x *= x;
        absN /= 2;
    }

    if (n < 0) {
        result = 1.0 / result;
    }

    return result;
}

int main() {
    double x;
    int n;
    std::cout << "Enter x: ";
    std::cin >> x;
    std::cout << "Enter n: ";
    std::cin >> n;

    double result = myPow(x, n);
    std::cout << "Result: " << result << std::endl;

    return 0;
}
