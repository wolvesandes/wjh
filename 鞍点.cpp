#include <iostream>
#include <vector>

struct Index {
    int row;
    int column;
};

Index findSaddlePoint(const std::vector<std::vector<int> >& matrix) {
    int n = matrix.size();

    for (int i = 0; i < n; i++) {
        int maxRowValue = matrix[i][0];
        int minColumnValue = matrix[0][i];
        int maxRowIndex = i;
        int minColumnIndex = i;

        for (int j = 1; j < n; j++) {
            if (matrix[i][j] > maxRowValue) {
                maxRowValue = matrix[i][j];
                maxRowIndex = i;
            }

            if (matrix[j][i] < minColumnValue) {
                minColumnValue = matrix[j][i];
                minColumnIndex = i;
            }
        }

        if (maxRowIndex == minColumnIndex) {
            return {maxRowIndex, minColumnIndex};
        }
    }

    return {-1, -1}; // 如果找不到鞍点，返回{-1, -1}
}

int main() {
    int n;
    std::cin >> n;

    std::vector<std::vector<int> > matrix(n, std::vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cin >> matrix[i][j];
        }
    }

    Index saddlePoint = findSaddlePoint(matrix);

    if (saddlePoint.row == -1 && saddlePoint.column == -1) {
        std::cout << "NO" << std::endl;
    } else {
        std::cout << saddlePoint.row << " " << saddlePoint.column << std::endl;
    }

    return 0;
}
