#include <iostream>

// A피로도, B처리량, C휴식, M최대피로
int main() {
    int A, B, C, M, tired = 0, processed = 0;
    std::cin >> A >> B >> C >> M;
    for(int i = 0; i < 24; i++) {
        if(tired + A > M) {
            tired = tired-C > 0 ? tired-C : 0;
        }
        else {
            tired += A;
            processed += B;
        }

    }

    std::cout << processed;

    return 0;
}