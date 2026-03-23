#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

bool func(std::string s1, std::string s2) {
    if(s1.size() == s2.size())
        return s1 < s2;
    if(s1.size() < s2.size())
        return true;
    return false;
}

int main() {
    int N;
    std::cin >> N;
    std::vector<std::string> v(N);
    for(int i = 0; i < N; i++) {
        std::cin >> v[i];
    }

    std::sort(v.begin(), v.end(), func);
    
    std::cout << v[0] << '\n';
    for(int i = 1; i < N; i++) {
        if(v[i] != v[i-1]) std::cout << v[i] << '\n';
    }

    return 0;
}