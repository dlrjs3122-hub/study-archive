#include <iostream>
#include <string>

int main() {
    int arr[26] = {3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10};
    int total = 0;
    std::string s;
    std::cin >> s;
    for(int i = 0; i < s.size(); i++) {
        total += arr[s[i] - 'A'];
    }
    std::cout << total;

    return 0;
}