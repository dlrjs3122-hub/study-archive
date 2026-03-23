#include <iostream>

int main() {
    int T;
    std::cin >> T;
    for(int i = 0; i < T; i++) {
        long long A, B;
        std::cin >> A >> B;
        std::cout << (A/B + 1)*(A/B) - (A/B) << '\n';
    }

    return 0;
}