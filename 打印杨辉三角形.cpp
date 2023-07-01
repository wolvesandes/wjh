#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int k = 0; k < N; k++) {
        int num;
        cin >> num;

        if (num <= 0 || num > 15) {
            cout << "Invalid input" << endl;
            continue;
        }

        int triangle[num][num];
        for (int i = 0; i < num; i++) {
            for (int j = 0; j <= i; j++) {
                if (j == 0 || j == i)
                    triangle[i][j] = 1;
                else
                    triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
                cout << triangle[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
