#include <iostream>

int main() {
    int n, step = 0;
    std::cin >> n;

    while(n >= 10) {
        int tmp = n;
        n = 1;
        while(tmp > 0) {
            n *= tmp % 10;
            tmp /= 10;
        }
        step++;
    }

    std::cout << step;

    return 0;
}