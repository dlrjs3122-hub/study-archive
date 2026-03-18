#include <iostream>
#include <vector>

void DFS(const std::vector<std::vector<bool>>& matrix, std::vector<std::vector<bool>>& visited, const int& x, const int& y) {
    int max_x = matrix[0].size() - 1;
    int max_y = matrix.size() - 1;
    
    visited[y][x] = true;
    int dy[] = {-1, 1, 0, 0};
    int dx[] = {0, 0, -1, 1};

    for(int i = 0; i < 4; i++) {
        int ny = y + dy[i];
        int nx = x + dx[i];

        if(ny < 0 || ny > max_y || nx < 0 || nx > max_x) continue;

        if(matrix[ny][nx] && !visited[ny][nx])
             DFS(matrix, visited, nx, ny);
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int T;
    std::cin >> T;
    for(int t = 0; t < T; t++) {
        int M, N, K;
        std::cin >> M >> N >> K;
        std::vector<std::vector<bool>> matrix(N, std::vector(M, false));
        std::vector<std::vector<bool>> visited(N, std::vector(M, false));
        for(int i = 0; i < K; i++) {
            int X, Y;
            std::cin >> X >> Y;
            matrix[Y][X] = true;
        }

        int count = 0;
        for(int i = 0; i < N; i++) {
            for(int j = 0; j < M; j++) {
                if(matrix[i][j] == true && visited[i][j] == false) {
                    DFS(matrix, visited, j, i);
                    count++;
                }
            }
        }
        std::cout << count << '\n';
    }
 
    return 0;
}