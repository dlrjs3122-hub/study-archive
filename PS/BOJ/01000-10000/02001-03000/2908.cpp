#include <iostream>
#include <string>

int main() {
    std::string A, B;
    std::cin >> A >> B;
    
    char temp;
    temp = A[0];
    A[0] = A[2];
    A[2] = temp;
    temp = B[0];
    B[0] = B[2];
    B[2] = temp;

    std::cout << (std::stoi(A) > std::stoi(B)? A : B);

    return 0;
}