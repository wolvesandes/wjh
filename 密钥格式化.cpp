#include <iostream>
#include <string>

std::string formatKey(const std::string& S, int K) {
    std::string formattedKey;

    int count = 0;
    for (int i = S.length() - 1; i >= 0; i--) {
        if (S[i] != '-') {
            // ��Сд��ĸת��Ϊ��д��ĸ
            formattedKey = char(toupper(S[i])) + formattedKey;
            count++;
            if (count % K == 0) {
                formattedKey = '-' + formattedKey;
            }
        }
    }

    // ����һ�������Ƿ�С�ڵ���K���ַ�
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
