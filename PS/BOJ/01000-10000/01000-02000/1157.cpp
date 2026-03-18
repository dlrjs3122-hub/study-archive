#include <iostream>
#include <string>

int main() {
    int arr[26] = {0};
    std::string str;
    std::cin >> str;
    for(char c : str) {
        if(c >= 'a') {
            arr[c - 'a']++;
        }
        else {
            arr[c - 'A']++;
        }
    }

    int most_i = 0;
    for(int i = 0; i < 26; i++) {
        if(arr[most_i] < arr[i]) most_i = i;
    }

    for(int i = 0; i < 26; i++) {
        if(arr[i] == arr[most_i] && i != most_i) {
            std::cout << '?';
            return 0;
        }
    } 
    std::cout << (char)(most_i + 'A');

    return 0;
}