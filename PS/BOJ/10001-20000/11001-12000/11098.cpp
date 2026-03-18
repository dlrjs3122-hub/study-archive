#include <iostream>
#include <string>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    std::cin >> n;
    for(int i = 0; i < n; i++) {
        int p;
        std::cin >> p;
        int max = -1;
        std::string best;
        for(int j = 0; j < p; j++) {
            int m;
            std::string name;
            std::cin >> m >> name;
            if(m > max) {
                max = m;
                best = name;
            }
        }
        std::cout << best << '\n';
    }

    return 0;
}