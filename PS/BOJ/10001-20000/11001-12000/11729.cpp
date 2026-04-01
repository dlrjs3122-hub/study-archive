#include <iostream>

// n: 원판의 개수, start: 시작 지점, end: 목표 지점, mid: 거쳐서 갈 지점
void hanoi(int n, int start, int mid, int end) {
    if(n == 1) {
        std::cout << start << ' ' << end << '\n';
        return;
    }
    hanoi(n-1, start, end, mid);
    std::cout << start << ' ' << end << '\n';
    hanoi(n-1, mid, start, end);
}

int main() {
    int n;  //원판의 개수
    std::cin >> n;

    long long move = 1;
    for(int i = 0; i < n; i++) move *= 2;
    move--;

    std::cout << move << '\n';
    hanoi(n, 1, 2, 3);

    return 0;
}