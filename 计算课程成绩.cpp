#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <algorithm>

struct Student {
    std::string name;
    double regularGrade;
    double finalGrade;
    double totalGrade;
};

// 比较函数，用于按总分由高到低排序
bool compareTotalGrade(const Student& s1, const Student& s2) {
    return s1.totalGrade > s2.totalGrade;
}

int main() {
    int numStudents;
    std::cin >> numStudents;

    std::vector<Student> students(numStudents);

    for (int i = 0; i < numStudents; i++) {
        std::cin >> students[i].name >> students[i].regularGrade >> students[i].finalGrade;
        students[i].totalGrade = students[i].regularGrade * 0.4 + students[i].finalGrade * 0.6;
    }

    // 按总分由高到低排序
    std::sort(students.begin(), students.end(), compareTotalGrade);

    for (std::vector<Student>::const_iterator it = students.begin(); it != students.end(); ++it) {
        const Student& student = *it;
        std::cout << student.name << " " << std::fixed << std::setprecision(2)
                  << student.regularGrade << " " << student.finalGrade << " "
                  << student.totalGrade << std::endl;
    }

    return 0;
}
