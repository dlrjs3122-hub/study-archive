#include <iostream>
#include <vector>

std::vector<int> v;
std::vector<int> store(6);

void lotto(int depth, int start) {
    if(depth == 6) {
        for(int i = 0; i < 6; i++) {
            std::cout << store[i] << ' ';
        }
        std::cout << '\n';
        return;
    }

    for(int i = start; i < v.size(); i++) {
        store[depth] = v[i];
        lotto(depth+1, i+1);
    }
}

int main() {
    int N;
    std::cin >> N;
    for(int i = 0; i < N; i++) {
        int number;
        std::cin >> number;
        v.push_back(number);
    }
    
    lotto(0, 0);

    return 0;
}