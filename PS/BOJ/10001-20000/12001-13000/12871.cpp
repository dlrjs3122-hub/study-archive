#include <iostream>
#include <string>
#include <numeric>

using namespace std;

int main() {
    string s, t, str1 = "", str2 = "";
    std::cin >> s >> t;
    int s_n = lcm(s.size(), t.size()) / s.size();
    int t_n = lcm(s.size(), t.size()) / t.size();
    for(int i = 0; i < s_n; i++) {
        str1 += s;
    }
    for(int i = 0; i < t_n; i++) {
        str2 += t;
    }
    cout << (str1 == str2 ? 1 : 0);

    return 0;
}