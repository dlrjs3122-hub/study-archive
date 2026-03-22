#include <iostream>
#include <string>

int main() {
    int n;
    int count = 0;
    std::cin >> n;
    for(int i = 0; i < n; i++) {
        std::string str;
        std::cin >> str;
        count += str.length();
    }

    std::cout << count;

    return 0;
}