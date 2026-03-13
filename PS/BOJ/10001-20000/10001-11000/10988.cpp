//팰린드롬인지 확인하기
#include <iostream>
#include <string>

int main() {
    std::string s;
    std::cin >> s;
    int front = 0, rear = s.size()-1;
    while(front < rear) {
        if(s[front] != s[rear]) {
            std::cout << 0;
            return 0;
        }
        front++;
        rear--;
    }
    std::cout << 1;
    return 0;
}