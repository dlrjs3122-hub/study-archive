#include <iostream>

void hanoi(int N, int start, int mid, int end) {
    if (N == 1) {
        std::cout << "1 : " << start << " -> " << end << '\n';
        return;
    }
    hanoi(N - 1, start, end, mid);
    std::cout << N << " : " << start << " -> " << end << '\n';
    hanoi(N - 1, mid, start, end);
}

int main() {
    int N;
    std::cin >> N;
    hanoi(N, 1, 2, 3);

    return 0;
}