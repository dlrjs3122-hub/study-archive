#include <iostream>
#include <iomanip>
#include <string>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout << std::fixed << std::setprecision(6);

    double credit, sum = 0.0, credit_sum, grade;
    std::string grade_str;
    for(int i = 0; i < 20; i++) {
        std::cin.ignore(51, ' ');
        std::cin >> credit >> grade_str;

        if(grade_str == "P") continue;
        credit_sum += credit;
        if(grade_str == "F") continue;

        if(grade_str[0] == 'A') grade = 4.0;
        else if(grade_str[0] == 'B') grade = 3.0;
        else if(grade_str[0] == 'C') grade = 2.0;
        else grade = 1.0;
        if(grade_str[1] == '+') grade += 0.5;
        sum += grade * credit;
    }

    std::cout << sum / credit_sum;
    

    return 0;
}