#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int N, k;
    std::cin >> N >> k;
    std::vector<int> v(N);

    for(int i = 0; i < N; i++) {
        std::cin >> v[i];
    }
    std::sort(v.begin(), v.end(), std::greater<>());
    std::cout << v[k-1];
    
    return 0;
}