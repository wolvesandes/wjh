#include <iostream>

int main() {
    int season;
    std::cin >> season;

    switch (season) {
        case 1:
            std::cout << "Spring" << std::endl;
            break;
        case 2:
            std::cout << "Summer" << std::endl;
            break;
        case 3:
            std::cout << "Fall" << std::endl;
            break;
        case 4:
            std::cout << "Winter" << std::endl;
            break;
        default:
            std::cout << "Invalid input" << std::endl;
            break;
    }

    return 0;
}
