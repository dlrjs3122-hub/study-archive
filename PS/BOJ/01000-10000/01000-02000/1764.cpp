#include <iostream>
#include <set>
#include <string>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int N, M;
    std::set<std::string> name_s, result;
    std::cin >> N >> M;

    for(int i = 0; i < N; i++) {
        std::string name;
        std::cin >> name;
        name_s.insert(name);
    }

    for(int i = 0; i < M; i++) {
        std::string name;
        std::cin >> name;
        if(name_s.find(name) != name_s.end()) {
            result.insert(name);
        }
    }

    std::cout << result.size() << '\n';
    for(auto it : result)
        std::cout << it << '\n';


    return 0;
}