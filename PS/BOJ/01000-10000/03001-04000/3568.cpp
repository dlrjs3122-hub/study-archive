#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string type;
    std::cin >> type;
    
    std::vector<std::string> v;

    while(true) {
        std::string var;
        std::cin >> var;

        char c = var.back();
        var.pop_back();
        v.push_back(var);
        if(c == ';') break;
    }

    for(std::string str : v) {
        std::cout << type;
        while(true) {
            if(str.back() != '*' && str.back() != ']' && str.back() != '&') break;
            if(str.back() == ']') {
                std::cout << "[]";
                str.pop_back();
                str.pop_back();
            }
            else {
                std::cout << str.back();
                str.pop_back();
            }
        }

        std::cout << ' ' << str << ";\n";
    }


    return 0;
}