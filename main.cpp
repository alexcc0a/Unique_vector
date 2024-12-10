#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>

void removeDuplicates(std::vector<int>& vec) {
    std::sort(vec.begin(), vec.end());
    auto last = std::unique(vec.begin(), vec.end());
    vec.erase(last, vec.end());
}

int main() {
    std::string input;
    std::cout << "[IN]: ";
    std::getline(std::cin, input);

    std::vector<int> vec;
    std::stringstream ss(input);
    int num;
    while (ss >> num) {
        vec.push_back(num);
    }

    removeDuplicates(vec);

    std::cout << "[OUT]: ";
    for (size_t i = 0; i < vec.size(); ++i) {
        std::cout << vec[i];
        if (i != vec.size() - 1) {
            std::cout << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}
