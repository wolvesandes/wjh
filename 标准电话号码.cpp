#include <iostream>
#include <string>

// 函数用来将字母转换成数字
int getDigit(char letter) {
    if (letter >= 'A' && letter <= 'C') {
        return 2;
    } else if (letter >= 'D' && letter <= 'F') {
        return 3;
    } else if (letter >= 'G' && letter <= 'I') {
        return 4;
    } else if (letter >= 'J' && letter <= 'L') {
        return 5;
    } else if (letter >= 'M' && letter <= 'O') {
        return 6;
    } else if (letter >= 'P' && letter <= 'S') {
        return 7;
    } else if (letter >= 'T' && letter <= 'V') {
        return 8;
    } else if (letter >= 'W' && letter <= 'Z') {
        return 9;
    }
    return -1; // 如果输入的字母不在范围内，则返回-1作为错误标志
}

int main() {
    std::string word;
    std::cin >> word;

    std::string phoneNumber = "";
    for (size_t i = 0; i < word.length(); i++) {
        char letter = word[i];
        int digit = getDigit(letter);
        if (digit != -1) {
            phoneNumber += static_cast<char>('0' + digit);
        }
    }

    std::cout << phoneNumber << std::endl;

    return 0;
}
