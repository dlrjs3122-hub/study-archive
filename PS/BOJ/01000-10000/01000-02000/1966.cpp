#include <iostream>
#include <queue>
#include <vector>
#include <utility>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int T;
    std::cin >> T;
    for(int t = 0; t < T; t++) {
        int N, M, O, count = 1;
        std::cin >> N >> M;
        std::queue<std::pair<int, int>> q;
        std::vector<int> importance_count(10, 0);

        for(int i = 0; i < N; i++) {
            int importance;
            std::cin >> importance;
            if(i == M) O = importance;
            importance_count[importance]++;
            q.push(std::pair(i, importance));
        }

        for(int i = 9; i > O; i--) {
            while(importance_count[i] != 0) {
                while(q.front().second != i) {
                    q.push(q.front());
                    q.pop();
                }
                q.pop();
                importance_count[i]--;
                count++;
            }
        }
        while(q.front().first != M) {
            if(q.front().second == O) {
                count++;
            }    
            q.pop();
        }

        std::cout << count << '\n';
    }
    return 0;
}
