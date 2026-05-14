#include <iostream>

bool obstacle[9][9] = {false};
bool rook[9] = {false};
int n, cnt = 0;

void n_rook(int depth) {
    if(depth == n) {
        cnt++;
        return;
    }

    for(int i = 0; i < n; i++) {
        if(obstacle[depth][i]) continue;
        if(rook[i]) continue;

        rook[i] = true;
        n_rook(depth+1);

        rook[i] = false;
    }

}

int main () {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    std::cin >> n;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            char c;
            std::cin >> c;
            if(c == '#') obstacle[i][j] = true;
        }
    }

    n_rook(0);
    std::cout << cnt;

    return 0;
}