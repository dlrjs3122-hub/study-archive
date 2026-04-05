#include <iostream>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int T;
    std::cin >> T;
    for(int t = 0; t < T; t++) {
        int n, result = 0;
        std::cin >> n;
        for(int i = 0; i < n; i++) {
            result++;
            int a_n;
            std::cin >> a_n;
            if(result == a_n) result++;
        }

        std::cout << result << '\n';
    }

    return 0;
}