#include <iostream>

int main() {
    int A_count = 1, B_count = 0;
    int K;
    std::cin >> K;
    for(int i = 0; i < K; i++) {
        int temp_A = A_count;
        A_count = B_count;
        B_count = B_count + temp_A;
    }
    std::cout << A_count << ' ' << B_count;

    return 0;
}