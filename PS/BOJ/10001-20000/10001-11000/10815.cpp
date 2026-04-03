#include <iostream>
#include <set>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int N, M;
    std::set<int> s;
    std::cin >> N;
    for(int i = 0; i < N; i++) {
        int num;
        std::cin >> num;
        s.insert(num);
    }

    std::cin >> M;
    for(int i = 0; i < M; i++) {
        int num;
        std::cin >> num;
        std::cout << (s.find(num) == s.end() ? 0 : 1) << ' ';
    }

    return 0;
}