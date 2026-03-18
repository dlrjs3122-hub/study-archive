//1978 소수 찾기
/*
is_prime(n)
    if(n == 1) return false
    for i = 2, ..., sqrt(n)
        if(n % i == 0) return false
    return true
*/
#include <iostream>

bool is_prime(const int &n) {
    if(n == 1) return false;
    for(int i = 2; i*i <= n ; i++) {
        if(n%i == 0) return false;
    }
    return true;
}

int main() {
    int N, count = 0;
    std::cin >> N;
    for(int i = 0; i < N; i++) {
        int num;
        std::cin >> num;
        if(is_prime(num)) count++;
    }
    std::cout << count;
    
    return 0;
}