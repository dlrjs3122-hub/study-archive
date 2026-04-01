#include <iostream>

int GCD(int a, int b) {
    if(a % b == 0) return b;
    return GCD(b, a%b);
}

long long LCM(long long a, long long b) {
    return a/GCD(a, b)*b;
}

int main() {
    int n;
    std::cin >> n;
    for(int i = 0; i < n; i++) {
        int a, b;
        std::cin >> a >> b;
        std::cout << LCM(a, b) << '\n';
    }

    return 0;
}