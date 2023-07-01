#include <iostream>
#include <string>
#include <sstream>

int main() {
    std::string text;
    std::getline(std::cin, text, ':');

    bool isWord = false;  // �жϵ�ǰ�Ƿ���һ��������
    int wordLength = 0;   // ��¼��ǰ���ʵĳ���

    std::istringstream iss(text);
    std::string word;

    while (iss >> word) {
        for (size_t i = 0; i < word.length(); i++) {
            if (word[i] != ' ') {
                isWord = true;
                wordLength++;
            }
        }

        if (isWord) {
            std::cout << wordLength << " ";
            wordLength = 0;
            isWord = false;
        }
    }

    std::cout << std::endl;

    return 0;
}
