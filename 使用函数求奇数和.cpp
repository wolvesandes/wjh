#include <iostream>

// 函数判断是否为偶数
bool even(int n) {
    if (n % 2 == 0) {
        return true;  // 偶数返回true
    } else {
        return false; // 奇数返回false
    }
}

int main() {
    int num;
    int sum = 0;

    
    while (std::cin >> num && num > 0) {  // 输入的数字大于0时循环
        if (!even(num)) { // 判断是否为奇数
            sum += num;   // 累加奇数的值
        }
    }

    std::cout << sum << std::endl;

    return 0;
}
