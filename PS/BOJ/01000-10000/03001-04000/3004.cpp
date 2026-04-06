#include <iostream>

int main() {
    int N;
    std::cin >> N;

    int vertical_slice = N/2;
    int horizontal_slice = N - vertical_slice;

    std::cout << (vertical_slice + 1) * (horizontal_slice + 1);

    return 0;
}