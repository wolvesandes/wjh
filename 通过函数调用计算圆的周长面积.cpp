#include <iostream>

// 计算圆的直径
double calculateDiameter(double radius) {
    return radius * 2;
}

// 计算圆的周长
double calculateCircumference(double radius) {
    const double PI = 3.14;
    return 2 * PI * radius;
}

// 计算圆的面积
double calculateArea(double radius) {
    const double PI = 3.14;
    return PI * radius * radius;
}

int main() {
    double radius;
    std::cin >> radius;

    double diameter = calculateDiameter(radius);
    double circumference = calculateCircumference(radius);
    double area = calculateArea(radius);

    std::cout << "直径=" << diameter << std::endl;
    std::cout << "周长=" << circumference << std::endl;
    std::cout << "面积=" << area << std::endl;

    return 0;
}
