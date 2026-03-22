#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> v;
    int sum = 0;
    for(int i = 0; i < 5; i++) {
        int num;
        std::cin >> num;
        v.push_back(num);
        sum += num;
    }
    std::sort(v.begin(), v.end());
    std::cout << sum/5 << '\n' << v[2];

    return 0;
}