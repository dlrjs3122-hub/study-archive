#include <iostream>
#include <string>

using namespace std;

int main() {
    string N;
    int M;
    std::cin >> N >> M;

    int total_length = stoi(N)*N.size();
    int out_length = total_length < M ? total_length : M;

    for(int i = 0; i < out_length; i++)
        std::cout << N[i % N.size()];
    
    return 0;
}