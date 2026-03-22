#include <iostream>
#include <string>

int main() {
    int n;
    std::string str = "SSH";
    std::cin >> n;
    int a = n/3;
    int b = n%3;
    for(int i = 0; i < a; i++) {
        std::cout << str;
    }
    for(int i = 0; i < b; i++) {
        std::cout << str[i];
    }

    return 0;
}