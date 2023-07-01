#include <iostream>
#include <iomanip>

// 判断是否为闰年
bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// 计算日期是星期几
std::string getDayOfWeek(int year, int month, int day) {
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    std::string weekDays[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

    // 计算从1900年1月1日到输入日期的总天数
    int totalDays = 0;
    for (int i = 1900; i < year; i++) {
        totalDays += isLeapYear(i) ? 366 : 365;
    }
    for (int i = 1; i < month; i++) {
        totalDays += daysInMonth[i - 1];
        if (i == 2 && isLeapYear(year))
            totalDays++;
    }
    totalDays += day;

    // 根据总天数计算星期几
    int dayOfWeek = totalDays % 7;

    return weekDays[dayOfWeek];
}

int main() {
    int year, month, day;
    char separator;
    std::cin >> year >> separator >> month >> separator >> day;

    std::string weekday = getDayOfWeek(year, month, day);
    std::cout << weekday << std::endl;

    return 0;
}
