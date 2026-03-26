#include <iostream>
#include <deque>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int N, M;
    std::deque<int> dq;
    std::cin >> N;
    std::vector<bool> is_queue(N, false);

    for(int i = 0; i < N; i++) {
        int b;
        std::cin >> b;
        if(b == 0) is_queue[i] = true;
    }

    for(int i = 0; i < N; i++) {
        int n;
        std::cin >> n;
        if(is_queue[i]) dq.push_front(n);
    }

    std::cin >> M;
    for(int i = 0; i < M; i++) {
        int n;
        std::cin >> n;
        dq.push_back(n);
        std::cout << dq.front() << ' ';
        dq.pop_front();
    }

    return 0;
}