#include <iostream>
#include <string>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int max_length = 0;
    std::vector<std::string> v(5, std::string());
    for(int i = 0; i < 5; i++) {
        std::cin >> v[i];
        if(max_length < v[i].size()) max_length = v[i].size();
    }

    for(int i = 0; i < max_length; i++) {
        for(int j = 0; j < 5; j++) {
            if(v[j].size() > i) std::cout << v[j][i];
        }
    } 

    return 0;
}