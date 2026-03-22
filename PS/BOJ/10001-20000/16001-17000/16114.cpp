#include <iostream>

int main() {
    int X, N;
    std::cin >> X >> N;

    if(N == 1) {
        if(X >= 0) std::cout << 0;
        else std::cout << "INFINITE";
    }
    else if(N % 2 == 1) std::cout << "ERROR";
    else if(N == 0) {
        if(X > 0) std::cout << "INFINITE";
        else std::cout << 0;
    }
    else {
        int speed = N/2;
        if(X <= speed) std::cout << 0;
        else{
            std::cout << (X - 1)/speed;
        }
    }

    return 0;
}