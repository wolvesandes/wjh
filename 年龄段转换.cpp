#include <iostream>

int main() {
    int age;
    std::cin >> age;

    if (age >= 1 && age <= 10) {
        std::cout << "Children" << std::endl;
    } else if (age >= 11 && age <= 20) {
        std::cout << "Teenagers" << std::endl;
    } else if (age >= 21 && age <= 40) {
        std::cout << "Youth" << std::endl;
    } else if (age >= 41 && age <= 50) {
        std::cout << "middle-aged" << std::endl;
    } else if (age >= 51 && age <= 80) {
        std::cout << "Elderly" << std::endl;
    } else if (age >= 81 && age <= 100) {
        std::cout << "Old man" << std::endl;
    } else {
        std::cout << "输入错误，请输入1-100之间的整数！" << std::endl;
    }

    return 0;
}
