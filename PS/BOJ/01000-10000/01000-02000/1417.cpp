#include <iostream>
#include <vector>

int max_idx(const std::vector<int>& vec) {
    int max = vec[0];
    int idx = 0;
    for(int i = 1; i < vec.size(); i++) {
        if(vec[i] >= max) {
            max = vec[i];
            idx = i;
        } 
    }
    return idx;
}

int main() {
    int N, count = 0;
    std::cin >> N;
    std::vector<int> v(N);
    for(int i = 0; i < N; i++) std::cin >> v[i];

    int idx;
    while((idx = max_idx(v)) != 0) {
        v[idx]--;
        v[0]++;
        count++;
    }

    std::cout << count;

    return 0;
}