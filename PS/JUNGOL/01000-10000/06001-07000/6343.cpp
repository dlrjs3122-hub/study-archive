#include <iostream>

int main() {
    int N;
    int arr[4] = {};
    
    std::cin >> N;
    for(int i = 0; i < N; i++) {
        char c;
        std::cin >> c;
        if(c == 'E') arr[0]++;
        else if(c == 'W') arr[1]++;
        else if(c == 'S') arr[2]++;
        else arr[3]++;
    }

    int E_time = arr[1]*2 + arr[2] + arr[3];
    int W_time = arr[0]*2 + arr[2] + arr[3];
    int S_time = arr[3]*2 + arr[0] + arr[1];
    int N_time = arr[2]*2 + arr[0] + arr[1];

    int answer = E_time < W_time ? E_time : W_time;
    answer = answer < S_time ? answer : S_time;
    answer = answer < N_time ? answer : N_time;

    std::cout << answer;

    return 0;
}