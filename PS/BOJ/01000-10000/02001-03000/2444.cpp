//별 찍기 - 7
#include <iostream>

int main() {
    int N;
    int star_n;
    int empty_n;
    
    std::cin >> N;
    for(int i = 0; i < N; i++ ){
        star_n = i*2 + 1;
        empty_n = (N*2 - 1) / 2 - i;
        for(int j = 0; j < empty_n; j++) {
            std::cout << ' ';
        }
        for(int j = 0; j < star_n; j++) {
            std::cout << '*';
        }
        std::cout << '\n';
    }
    for(int i = N-2; i >= 0; i--) {
        star_n = i*2 + 1;
        empty_n = (N*2 - 1) / 2 - i;
        for(int j = 0; j < empty_n; j++) {
            std::cout << ' ';
        }
        for(int j = 0; j < star_n; j++) {
            std::cout << '*';
        }
        std::cout << '\n';
    }


    return 0;
}