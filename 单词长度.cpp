#include <iostream>
#include <string>
#include <sstream>

int main() {
    std::string text;
    std::getline(std::cin, text, ':');

    bool isWord = false;  // 判断当前是否在一个单词中
    int wordLength = 0;   // 记录当前单词的长度

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
