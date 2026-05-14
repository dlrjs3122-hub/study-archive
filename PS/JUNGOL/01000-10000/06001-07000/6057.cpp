#include <iostream>
#include <vector>
#include <queue>

int main() {
    int P, N;
    long long answer = 0;
    std::cin >> P >> N;
    std::vector<std::queue<int>> pizza(N+1, std::queue<int>());
    
    for(int i = 0; i < N; i++) {
        int cmd;
        std::cin >> cmd;
        if(cmd == 0) {
            int p_type, cost;
            std::cin >> p_type >> cost;
            pizza[p_type].push(cost);
        }
        else {
            int order;
            std::cin >> order;
            if(!pizza[order].empty()) {
                answer += pizza[order].front();
                pizza[order].pop();
            }
        }
    }

    std::cout << answer;

    return 0;
}