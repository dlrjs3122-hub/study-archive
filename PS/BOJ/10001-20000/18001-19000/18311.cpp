#include <iostream>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    long long N, K;
    std::cin >> N >> K;
    std::vector<int> v(N);
    for(int i = 0; i < N; i++) {
        std::cin >> v[i]; 
    }

    for(int i = 0; i < N; i++) {
        K -= v[i];
        if(K < 0) {
            std::cout << i+1;
            return 0;
        }
    }

    for(int i = N-1; i >= 0; i--) {
        K -= v[i];
        if(K < 0) {
            std::cout << i+1;
            return 0;
        }
    }

    return 0;
}