#include <iostream>
#include <vector>
#include <map>

int main() {
    int N, R;
    std::map<int, int> drugs;

    std::cin >> N;
    for(int i = 0; i < N; i++) {
        int efficacy, name;
        std::cin >> efficacy >> name;
        drugs.insert({efficacy, name});
    }

    std::cin >> R;
    for(int i = 0; i < R; i++) {
        bool died = false;
        int symptom_n;
        std::vector<int> result;

        std::cin >> symptom_n;
        for(int j = 0; j < symptom_n; j++) {
            int S;
            std::cin >> S;
            if(drugs.find(S) == drugs.end()) died = true;
            else result.push_back(drugs[S]);
        }

        if(died)
            std::cout << "YOU DIED";
        else
            for(auto it : result) std::cout << it << ' ';

        std::cout << '\n';
    }

    return 0;
}