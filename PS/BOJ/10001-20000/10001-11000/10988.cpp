#include <iostream>
#include <string>


int main() {
    std::string str;
    std::cin >> str;
    int front = 0, rear = str.size()-1;
    bool b = true;

    while(front < rear) {
        if(str[front] != str[rear]) b = false;
        front++;
        rear--;
    }

    std::cout << b;

    return 0;
}