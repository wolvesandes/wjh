#include <iostream>
#include <cstring>

int mystrstr(char a[], char b[]) {
    int lenA = std::strlen(a);
    int lenB = std::strlen(b);

    for (int i = 0; i <= lenA - lenB; i++) {
        bool found = true;
        for (int j = 0; j < lenB; j++) {
            if (a[i + j] != b[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            return i;
        }
    }

    return -1;
}

int main() {
    char a[501];
    char b[501];

    std::cin.getline(a, 501);
    std::cin.getline(b, 501);

    int result = mystrstr(a, b);
    std::cout << result << std::endl;

    return 0;
}
