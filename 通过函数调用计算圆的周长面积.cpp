#include <iostream>

// ����Բ��ֱ��
double calculateDiameter(double radius) {
    return radius * 2;
}

// ����Բ���ܳ�
double calculateCircumference(double radius) {
    const double PI = 3.14;
    return 2 * PI * radius;
}

// ����Բ�����
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

    std::cout << "ֱ��=" << diameter << std::endl;
    std::cout << "�ܳ�=" << circumference << std::endl;
    std::cout << "���=" << area << std::endl;

    return 0;
}
