#include <iostream>

int IsCancel(int a[], int n, int k) {
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] <= 0) {
            count++;
        }
    }

    if (count < k) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int n, k;
    std::cin >> n >> k;

    int arrivalTimes[1000];
    for (int i = 0; i < n; i++) {
        std::cin >> arrivalTimes[i];
    }

    if (IsCancel(arrivalTimes, n, k)) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
