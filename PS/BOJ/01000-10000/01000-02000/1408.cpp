#include <iostream>
#include <iomanip>

int main() {
    int time1[3];
    int time2[3];
    int result[3];
    char c;
    std::cin >> time1[0] >> c >> time1[1] >> c >> time1[2];
    std::cin >> time2[0] >> c >> time2[1] >> c >> time2[2];
    
    time2[0] += 24;
    result[0] = time2[0] - time1[0];
    result[1] = time2[1] - time1[1];
    result[2] = time2[2] - time1[2];

    if(result[2] < 0) {
        result[1]--;
        result[2] += 60;
    }
    if(result[1] < 0) {
        result[0]--;
        result[1] += 60;
    }
    if(result[0] > 23) {
        result[0] -= 24;
    }

    printf("%02d:%02d:%02d", result[0], result[1], result[2]);

    return 0;
}