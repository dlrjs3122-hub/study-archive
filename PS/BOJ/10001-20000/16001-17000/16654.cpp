#include <iostream>
#include <string>
#include <stack>

int main() {
    std::string str;
    std::string result;
    std::stack<char> stk;
    std::cin >> str;
    for(int i = 0; i < str.size(); i += 2) {
        if(stk.empty()) {
            stk.push(str[i]);
            result.push_back('[');
        }
        else if(str[i] == '<') {
            if(stk.top() == '>') {
                stk.pop();
                result.push_back(']');
            }
            else {
                stk.push(str[i]);
                result.push_back('[');
            }
        }
        else {
            if(stk.top() == '<') {
                stk.pop();
                result.push_back(']');
            }
            else {
                stk.push(str[i]);
                result.push_back('[');
            }
        }
    }

    if(stk.empty()) {
        for(char c : result) {
            std::cout << c;
        }
    }
    else {
        std::cout << "Keine Loesung";
    }


    return 0;
}