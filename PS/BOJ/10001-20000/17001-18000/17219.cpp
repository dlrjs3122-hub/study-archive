#include <iostream>
#include <map>
#include <string>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int N, M;
    std::cin >> N >> M;
    std::map<std::string, std::string> m;

    for(int i = 0; i < N; i++) {
        std::string site, password;
        std::cin >> site >> password;
        //m.insert({site, password});
        m[site] = password;
    }
    for(int i = 0; i < M; i++) {
        std::string site;
        std::cin >> site;
        std::cout << m[site] << '\n';
    }

    return 0;
}