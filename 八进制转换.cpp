#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    if (num < 0 || num > 32767) {
        return 0;
    }

    cout  << oct << num << endl;

    return 0;
}
