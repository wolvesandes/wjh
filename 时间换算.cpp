#include <iostream>

int main() {
    int bjtTime, utcTime;
    std::cin >> bjtTime;

    int bjtHour = bjtTime / 100; // ��ȡBJT��Сʱ����
    int bjtMinute = bjtTime % 100; // ��ȡBJT�ķ��Ӳ���

    if (bjtHour >= 8) { // �ж��Ƿ����
        utcTime = (bjtHour - 8) * 100 + bjtMinute; // ����UTCʱ��
    } else {
        utcTime = (bjtHour + 24 - 8) * 100 + bjtMinute; // ������գ���Сʱ����24�ټ���UTCʱ��
    }

    std::cout << utcTime << std::endl;

    return 0;
}
