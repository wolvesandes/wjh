#include <iostream>
#include <string>
#include <stack>

// 将十进制数转换为指定进制的数
std::string convertToBase(int number, int base) {
    // 数字映射表，用于处理大于10的进制
    std::string digits = "0123456789ABCDEF";
    std::stack<char> result;

    while (number > 0) {
        int remainder = number % base;
        result.push(digits[remainder]);
        number /= base;
    }

    std::string convertedNumber = "";
    while (!result.empty()) {
        convertedNumber += result.top();
        result.pop();
    }

    return convertedNumber;
}

int main() {
    int N, R;

    while (std::cin >> N >> R) {
        std::string convertedNumber = convertToBase(N, R);
        std::cout << convertedNumber << std::endl;
    }

    return 0;
}
