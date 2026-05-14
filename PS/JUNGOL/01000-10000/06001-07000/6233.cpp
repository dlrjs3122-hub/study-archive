#include <iostream>
#include <queue>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n, m, k, answer;
    std::queue<int> q;

    std::cin >> n >> m >> k;
    for(int i = 1; i <= n; i++)
        q.push(i);

    for(int i = 0; i < k; i++) {
        for(int j = 0; j < m-1; j++) {
            q.push(q.front());
            q.pop();
        }
        if(i == k-1) answer = q.front();
        q.pop();
    }
    
    std::cout << answer;

    return 0;
}