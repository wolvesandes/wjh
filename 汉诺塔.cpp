#include <iostream>

// 函数用来打印移动步骤
void moveDisk(int num, char source, char target) {
    std::cout << "Move disk " << num << " from " << source << " to " << target << std::endl;
}

// 递归函数实现汉诺塔移动
void hanoi(int num, char source, char auxiliary, char target) {
    if (num == 1) {
        moveDisk(num, source, target);
    } else {
        hanoi(num-1, source, target, auxiliary);
        moveDisk(num, source, target);
        hanoi(num-1, auxiliary, source, target);
    }
}

int main() {
    int n;
    std::cin >> n;

    hanoi(n, 'A', 'B', 'C');

    return 0;
}
