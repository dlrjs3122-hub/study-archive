#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int T;
    std::cin >> T;
    for(int t = 0; t < T; t++) {
        int N, M;

        std::cin >> N;
        std::vector<int> note1(N);
        for(int i = 0; i < N; i++)
            std::cin >> note1[i];

        std::cin >> M;
        std::vector<int> note2(M);
        for(int i = 0; i < M; i++)
            std::cin >> note2[i];

        std::sort(note1.begin(), note1.end());

        for(auto it : note2)
            std::cout << (std::binary_search(note1.begin(), note1.end(), it) ? 1 : 0) << '\n';
    }

    return 0;
}