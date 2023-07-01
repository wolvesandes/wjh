#include <iostream>

void sort(int num[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (*(num + j) > *(num + j + 1)) {
                int temp = *(num + j);
                *(num + j) = *(num + j + 1);
                *(num + j + 1) = temp;
            }
        }
    }
}

int main() {
    int n;
    std::cin >> n;

    int* num = new int[n];
    for (int i = 0; i < n; i++) {
        std::cin >> *(num + i);
    }

    sort(num, n);

    for (int i = 0; i < n; i++) {
        std::cout << *(num + i);
        if (i < n - 1) {
            std::cout << " ";
        }
    }
    std::cout << std::endl;

    delete[] num;

    return 0;
}
