#include <iostream>
#include <vector>
#include <string>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    std::vector<bool> P_cards(13, false);
    std::vector<bool> K_cards(13, false);
    std::vector<bool> H_cards(13, false);
    std::vector<bool> T_cards(13, false);

    char c1, c2, c3;

    while(std::cin >> c1) {
        std::cin >> c2 >> c3;
        int num_idx = (c2 - '0') * 10 + c3 - '0' - 1;

        if(c1 == 'P') {
            if(P_cards[num_idx]) {
                std::cout << "ERROR";
                return 0;
            }
            else P_cards[num_idx] = true;
        }
        else if(c1 == 'K') {
            if(K_cards[num_idx]) {
                std::cout << "ERROR";
                return 0;
            }
            else K_cards[num_idx] = true;
        }
        else if(c1 == 'H') {
            if(H_cards[num_idx]) {
                std::cout << "ERROR";
                return 0;
            }
            else H_cards[num_idx] = true;
        }
        else {
            if(T_cards[num_idx]) {
                std::cout << "ERROR";
                return 0;
            }
            else T_cards[num_idx] = true;
        }
    }

    int cnt = 0;
    for(const bool& b : P_cards) if(!b) cnt++;
    std::cout << cnt << ' ';
    cnt = 0;
    for(const bool& b : K_cards) if(!b) cnt++;
    std::cout << cnt << ' ';
    cnt = 0;
    for(const bool& b : H_cards) if(!b) cnt++;
    std::cout << cnt << ' ';
    cnt = 0;
    for(const bool& b : T_cards) if(!b) cnt++;
    std::cout << cnt << ' ';


    return 0;
}