#include <iostream>
#include <string>

std::string formatKey(const std::string& S, int K) {
    std::string formattedKey;

    int count = 0;
    for (int i = S.length() - 1; i >= 0; i--) {
        if (S[i] != '-') {
            // 将小写字母转换为大写字母
            formattedKey = char(toupper(S[i])) + formattedKey;
            count++;
            if (count % K == 0) {
                formattedKey = '-' + formattedKey;
            }
        }
    }

    // 检查第一个分组是否小于等于K个字符
    if (formattedKey.length() > 0 && formattedKey[0] == '-') {
        formattedKey = formattedKey.substr(1);
    }

    return formattedKey;
}

int main() {
    std::string S;
    std::cin >> S;

    int K;
    std::cin >> K;

    std::string formattedKey = formatKey(S, K);
    std::cout << formattedKey << std::endl;

    return 0;
}
