#include <iostream>

int main() {
    int N;
    std::cin >> N;

    int answer = 1;
    for(int i = 1; i <= N; i++) {
        answer *= i;
    }
    std::cout << answer;

    return 0;
}