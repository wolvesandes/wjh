#include <iostream>
#include <stack>
using namespace std;

void convertToBase(int num, int base) {
    stack<int> digits;

    while (num > 0) {
        digits.push(num % base);
        num /= base;
    }

    while (!digits.empty()) {
        cout << digits.top();
        digits.pop();
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int decimal, base;
        cin >> decimal >> base;

        if (decimal <= 1 || base < 2 || base >= 10) {
            cout << "Invalid input" << endl;
            continue;
        }

        convertToBase(decimal, base);
    }

    return 0;
}
