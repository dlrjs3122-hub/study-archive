#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n, result = 0;
    std::cin >> n;
    std::vector<int> v(n);
    for(int i = 0; i < n; i++)
        std::cin >> v[i];
    
    std::sort(v.begin(), v.end());

    for(auto it : v) {
        result += it * n--;
    }

    std::cout << result;

    return 0;
}