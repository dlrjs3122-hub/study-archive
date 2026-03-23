#include <iostream>

int main() {
    int arr[10] = {};
    char c;
    while(std::cin >> c) {
        arr[(int)(c - '0')]++;
    }
    for(int i = 9; i >= 0; i--) {
        for(int j = 0; j < arr[i]; j++) {
            std::cout << i;
        }
    }
    return 0;
}