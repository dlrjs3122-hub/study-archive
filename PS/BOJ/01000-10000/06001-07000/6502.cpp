#include <iostream>
#include <cmath>

int main() {

    int count = 1;
    while(true) {
        int r;
        double w, l;
        std::cin >> r;
        if(r == 0) break;
        std::cin >> w >> l;
        
        double diagonal = std::sqrt((w*w+l*l));

        if(r >= diagonal/2) std::cout << "Pizza " << count << " fits on the table.\n";
        else std::cout << "Pizza " << count << " does not fit on the table.\n";

        count++;
    }


    return 0;
}