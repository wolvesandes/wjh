#include <iostream>

// �����ж��Ƿ�Ϊż��
bool even(int n) {
    if (n % 2 == 0) {
        return true;  // ż������true
    } else {
        return false; // ��������false
    }
}

int main() {
    int num;
    int sum = 0;

    
    while (std::cin >> num && num > 0) {  // ��������ִ���0ʱѭ��
        if (!even(num)) { // �ж��Ƿ�Ϊ����
            sum += num;   // �ۼ�������ֵ
        }
    }

    std::cout << sum << std::endl;

    return 0;
}
