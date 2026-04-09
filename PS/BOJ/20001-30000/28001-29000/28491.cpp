#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n, count = 0, max_b = 0;

    std::cin >> n;
    std::vector<std::pair<int, int>> swords(n);

    for(int i = 0; i < n; i++) {
        std::cin >> swords[i].first >> swords[i].second;
    }

    std::sort(swords.begin(), swords.end(), [](const std::pair<int, int>& s1, const std::pair<int, int>& s2)->bool {
        if(s1.first != s2.first) return s1.first > s2.first;
        return s1.second > s2.second;
    });

    for(int i = 0; i < n; i++) {
        if(swords[i].second > max_b) {
            max_b = swords[i].second;
            count++;
        }
    }

    std::cout << count;

    return 0;
}