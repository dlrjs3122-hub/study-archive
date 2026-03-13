#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int M, N, sum = 0;
    cin >> M >> N;
    
    int num1 = (int)ceil(sqrt(M));
    int num2 = (int)(sqrt(N));

    if(num1 > num2) {
        std::cout << -1;
        return 0;
    }

    int min = num1 * num1;
    for(int n = num1; n <= num2; n++ ) {
        sum += n * n;
    }

    std::cout << sum << '\n' << min;

    return 0;
}