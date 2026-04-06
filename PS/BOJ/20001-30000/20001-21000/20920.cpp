#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int N, M;
    std::map<std::string, int> words;

    std::cin >> N >> M;
    for(int i = 0; i < N; i++) {
        std::string str;
        std::cin >> str;
        if(str.size() >= M) words[str]++;    
    }

    std::vector<std::pair<std::string, int>> result = std::vector<std::pair<std::string, int>>(words.begin(), words.end());

    std::sort(result.begin(), result.end(), [](const std::pair<std::string, int>& a, const std::pair<std::string, int>& b)->bool {
        if(a.second != b.second) return a.second > b.second;
        else if(a.first.size() != b.first.size()) return a.first.size() > b.first.size();
        else return a.first < b.first; 
    });

    for(auto it : result)
        std::cout << it.first << '\n';

    return 0;
}