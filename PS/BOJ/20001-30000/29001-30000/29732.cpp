#include <iostream>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int N, M, K, count = 0;
    std::cin >> N >> M >> K;
    std::vector<bool> v(N, false);
    std::vector<bool> result(N, false);
    for(int i = 0; i < N; i++) {
        char c;
        std::cin >> c;
        if(c == 'R') v[i] = true;
    }

    for(int i = 0; i < N; i++) {
        if(v[i]) {
            int front_idx = i - K >= 0 ? i - K : 0;
            int rear_idx = i + K <= N - 1 ? i + K : N - 1;
            for(int j = front_idx; j <= rear_idx; j++) {
                result[j] = true;
            }
        }
    }

    for(auto it : result) {
        if(it) count++;
    }
    std::cout << (count <= M ? "Yes" : "No");

    return 0;
}