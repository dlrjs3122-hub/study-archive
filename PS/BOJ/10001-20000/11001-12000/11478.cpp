#include <iostream>
#include <string>
#include <set>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    std::string str;
    std::set<std::string> result;

    std::cin >> str;
    for(int i = 0; i < str.size(); i++) {
        for(int j = 1; j <= str.size()-i; j++) {
            result.insert(str.substr(i, j));
        }
    }
    
    std::cout << result.size();

    return 0;
}