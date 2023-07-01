#include <iostream>
#include <sstream>

std::string toString(int number) {
    std::ostringstream oss;
    oss << number;
    return oss.str();
}

std::string calculateDecimal(int numerator, int denominator) {
    std::string result;

    // 计算整数部分
    int quotient = numerator / denominator;
    result += toString(quotient);
    result += ".";

    // 计算小数部分
    int remainder = numerator % denominator;
    for (int i = 0; i < 200; i++) {
        remainder *= 10;
        quotient = remainder / denominator;
        remainder %= denominator;
        result += toString(quotient);

        if (remainder == 0) {
            break;
        }
    }

    return result;
}

int main() {
    int numerator, denominator;
    std::cin >> numerator >> denominator;

    std::string decimal = calculateDecimal(numerator, denominator);
    std::cout << decimal << std::endl;

    return 0;
}
