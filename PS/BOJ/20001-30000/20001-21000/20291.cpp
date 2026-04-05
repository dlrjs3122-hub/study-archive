#include <iostream>
#include <string>
#include <map>
#include <algorithm>

int main() {
    int n;
    std::map<std::string, int> m;
    std::cin >> n;
    for(int i = 0; i < n; i++) {
        std::string str;
        std::cin >> str;
        str = str.substr(str.find('.')+1);
        
        if(m.find(str) == m.end()) {
            m[str] = 1;
        }
        else {
            m[str]++;
        }
    }

    for(auto it : m) {
        std::cout << it.first << ' ' << it.second << '\n';
    }

    

    return 0;
}