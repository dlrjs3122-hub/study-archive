#include <iostream>
#include <vector>

struct Chocolate{
    int w;
    int h;

    Chocolate(const int& w_, const int& h_) {
        if(h_ > w_) {
            w = h_;
            h = w_;
        }
        else {
            w = w_;
            h = h_;
        }
    }
};

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int N;
    long long frame_w = 0, frame_h = 0;
    std::vector<Chocolate> v;

    std::cin >> N;
    for(int i = 0; i < N; i++) {
        int w, h;
        std::cin >> w >> h;
        v.push_back(Chocolate(w, h));
    }

    for(auto ch : v) {
        if(frame_w < ch.w) frame_w = ch.w;
        if(frame_h < ch.h) frame_h = ch.h;
    }

    std::cout << frame_w * frame_h;

    return 0;
}