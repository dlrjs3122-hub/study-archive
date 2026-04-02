#include <iostream>
#include <string>
#include <stack>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int N, good = 0;
    std::cin >> N;
    for(int i = 0; i < N; i++) {
        std::string str;
        std::cin >> str;
        std::stack<char> stk;

        for(int j = 0; j < str.size(); j++) {
            if(stk.empty()) {
                stk.push(str[j]);
                continue;
            }

            else {
                if(str[j] == 'A') {
                    if(stk.top() == 'A') {
                        stk.pop();
                    }
                    else {
                        stk.push(str[j]);
                    }
                }
                else {
                    if(stk.top() == 'B') {
                        stk.pop();
                    }
                    else {
                        stk.push(str[j]);
                    }
                }
            }

        }

        if(stk.empty()) good++;
    }

    std::cout << good;

    return 0;
}