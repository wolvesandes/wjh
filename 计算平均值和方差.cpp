#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>

// 计算平均值
double calculateMean(const std::vector<int>& numbers) {
    int sum = 0;
    for (int i = 0; i < numbers.size(); i++) {
        sum += numbers[i];
    }
    return static_cast<double>(sum) / numbers.size();
}

// 计算方差
double calculateVariance(const std::vector<int>& numbers, double mean) {
    double sumSquares = 0;
    for (int i = 0; i < numbers.size(); i++) {
        sumSquares += pow(numbers[i] - mean, 2);
    }
    return sumSquares / numbers.size();
}

int main() {
    int n;
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::vector<int> numbers(6);
        for (int j = 0; j < 6; j++) {
            std::cin >> numbers[j];
        }

        double mean = calculateMean(numbers);
        double variance = calculateVariance(numbers, mean);

        std::cout << std::fixed << std::setprecision(2) << mean << " " << variance << std::endl;
    }

    return 0;
}
