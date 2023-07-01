#include <iostream>
#include <vector>
#include <string>
#include <sstream>

// 自定义的整数转换函数
template <typename T>
std::string to_string(T value) {
    std::ostringstream os;
    os << value;
    return os.str();
}

// 判断一个数是否为回文数
bool isPalindrome(int number) {
    std::string strNumber = to_string(number);
    int left = 0;
    int right = strNumber.length() - 1;

    while (left < right) {
        if (strNumber[left] != strNumber[right]) {
            return false;
        }
        left++;
        right--;
    }

    return true;
}

int main() {
    int N;
    std::cin >> N;

    for (int i = 0; i < N; i++) {
        int m, k;
        std::cin >> m >> k;

        std::vector<int> palindromes;
        int nextNumber = m + 1;

        while (palindromes.size() < k) {
            if (isPalindrome(nextNumber)) {
                palindromes.push_back(nextNumber);
            }
            nextNumber++;
        }

        for (int j = 0; j < palindromes.size(); j++) {
            std::cout << palindromes[j];
            if (j < palindromes.size() - 1) {
                std::cout << " ";
            }
        }

        std::cout << std::endl;
    }

    return 0;
}
