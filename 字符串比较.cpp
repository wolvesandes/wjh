#include <iostream>
#include <string>
#include <vector>

std::vector<int> findSubstringLocations(const std::string& str1, const std::string& str2) {
    std::vector<int> locations;
    int n = str1.length();
    int m = str2.length();

    for (int i = 0; i <= m - n; i++) {
        if (str2.substr(i, n) == str1) {
            locations.push_back(i);
        }
    }

    return locations;
}

int main() {
    std::string str1, str2;
    std::getline(std::cin, str1);
    std::getline(std::cin, str2);

    std::vector<int> locations = findSubstringLocations(str1, str2);

    if (locations.empty()) {
        std::cout << -1 << std::endl;
    } else {
        for (int i = 0; i < locations.size(); i++) {
            std::cout << locations[i];
            if (i < locations.size() - 1) {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}
