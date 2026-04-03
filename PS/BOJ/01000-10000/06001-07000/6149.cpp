#include <iostream>
#include <deque>
#include <vector>
#include <algorithm>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int N, K, P;
    std::cin >> N >> K >> P;
    std::deque<int> dq(K, 0);
    std::vector<int> result;
    for(int i = 0; i < K; i++) dq[i] = i+1;

    while(!dq.empty()) {
        for(int i = 0; i < N-1; i++) {
            dq.pop_front();
            if(dq.empty()) break;

            for(int i = 0; i < P; i++) {
                dq.push_back(dq.front());
                dq.pop_front();
            }
        }

        result.push_back(dq.front());
        dq.pop_front();
        if(dq.empty()) break;
        for(int i = 0; i < P; i++) {
            dq.push_back(dq.front());
            dq.pop_front();
        }
    }

    std::sort(result.begin(), result.end());

    for(auto it : result) std::cout << it << '\n';

    return 0;
}