#include <iostream>
#include <string>
#include <stack>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    while(true) {
        std::string line;
        std::getline(std::cin, line);
        if(line == ".") break;

        std::stack<char> stk;
        bool balanced = true;
        for(auto it : line) {
            if(it == '(' || it == '[') stk.push(it);
            else if(it == ')') {
                if(stk.empty()) balanced = false;
                else if(stk.top() != '(') balanced = false;
                else stk.pop(); 
            }
            else if(it == ']') {
                if(stk.empty()) balanced = false;
                else if(stk.top() != '[') balanced = false;
                else stk.pop(); 
            }
        }
        if(!stk.empty()) balanced = false;

        std::cout << (balanced ? "yes" : "no") << '\n';
    }

    return 0;
}