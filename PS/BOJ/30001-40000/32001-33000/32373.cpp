#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int N, k;
    std::cin >> N >> k;
    std::vector<int> v(N);
    for(int i = 0; i < N; i++) 
        std::cin >> v[i];

    for(int i = 0; i < k; i++) {
        std::vector<int> temp_v;
        for(int j = i; j < N; j += k) {
            temp_v.push_back(v[j]);
        }
        std::sort(temp_v.begin(), temp_v.end());
        
        int idx = i;
        for(int j = 0; j < temp_v.size(); j++) {
            v[idx + j*k] = temp_v[j];
        }
    }

    bool sorted = true;
    for(int i = 0; i < N-1; i++) {
        if(v[i] > v[i+1]) {
            sorted = false;
            break;
        }
    }
    
    std::cout << (sorted ? "Yes" : "No");

    return 0;
}