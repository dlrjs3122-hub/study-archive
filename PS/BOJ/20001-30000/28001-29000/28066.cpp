#include <iostream>
#include <queue>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int N, K;
    std::cin >> N >> K;
    std::queue<int> q;
    for(int i = 1; i <= N; i++) q.push(i);

    while(K <= q.size()) {
        q.push(q.front());
        for(int i = 0; i < K; i++)
            q.pop();
    }

    std::cout << q.front();

    return 0;
}