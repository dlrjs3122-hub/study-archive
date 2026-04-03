#include <iostream>
#include <string>
#include <set>

int main() {
    int N;
    std::cin >> N;
    std::set<std::string> types;

    for(int i = 0; i < N; i++) {
        std::string topping;
        std::cin >> topping;

        if(topping.size() < 6) continue;
        if(topping.substr(topping.size()-6, 6) != "Cheese") continue;

        std::string type = topping.substr(0, topping.size());
        types.insert(type);
    }

    std::cout << (types.size() >= 4 ? "yummy" : "sad");

    return 0;
}