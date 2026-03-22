#include <iostream>

int main() {
    int A;
    std::cin >> A;
    for(int i = 1; i <= A; i++) {
        int key_num = 30 % (i+1);
        if(key_num > i || key_num == 0) std::cout << i << '\n';
    }

    return 0;
}