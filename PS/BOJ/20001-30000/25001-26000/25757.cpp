#include <iostream>
#include <set>
#include <string>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int N;
    char game;
    std::set<std::string> players;
    
    std::cin >> N >> game;
    for(int i = 0; i < N; i++) {
        std::string name;
        std::cin >> name;
        players.insert(name);
    }

    if(game == 'Y') std::cout << players.size();
    else if(game == 'F') std::cout << players.size() / 2;
    else std::cout << players.size() / 3;

    return 0;
}