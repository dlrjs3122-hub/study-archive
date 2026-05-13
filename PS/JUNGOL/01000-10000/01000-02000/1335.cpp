#include <iostream>
#include <vector>
#include <utility>

std::pair<int, int> solution(int row, int column, int size, const std::vector<std::vector<bool>>& matrix) {
    std::pair<int, int> b_w(0,0);
    if(size == 1) {
        if(matrix[row][column]) b_w.first++;
        else b_w.second++;
        return b_w;
    }
    b_w.first = solution(row, column, size/2, matrix).first + solution(row + size/2, column, size/2, matrix).first + solution(row, column + size/2, size/2, matrix).first + solution(row + size/2, column + size/2, size/2, matrix).first;
    b_w.second = solution(row, column, size/2, matrix).second + solution(row + size/2, column, size/2, matrix).second + solution(row, column + size/2, size/2, matrix).second + solution(row + size/2, column + size/2, size/2, matrix).second;
    if(b_w.first == 4 && b_w.second == 0) {
        b_w.first = 1;
        b_w.second = 0;
    }
    else if(b_w.first == 0 && b_w.second == 4) {
        b_w.first = 0;
        b_w.second = 1;
    }
    
    return b_w;
}

int main() {
    int N;
    std::cin >> N;
    std::vector<std::vector<bool>> paper(N, std::vector<bool>(N, false));
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            bool blue;
            std::cin >> blue;
            if(blue) paper[i][j] = true;
        }
    }
    
    auto answer = solution(0, 0, N, paper);
    std::cout << answer.second << '\n' << answer.first;

    return 0;
}