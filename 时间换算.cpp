#include <iostream>

int main() {
    int bjtTime, utcTime;
    std::cin >> bjtTime;

    int bjtHour = bjtTime / 100; // 获取BJT的小时部分
    int bjtMinute = bjtTime % 100; // 获取BJT的分钟部分

    if (bjtHour >= 8) { // 判断是否跨日
        utcTime = (bjtHour - 8) * 100 + bjtMinute; // 计算UTC时间
    } else {
        utcTime = (bjtHour + 24 - 8) * 100 + bjtMinute; // 如果跨日，则将小时加上24再计算UTC时间
    }

    std::cout << utcTime << std::endl;

    return 0;
}
