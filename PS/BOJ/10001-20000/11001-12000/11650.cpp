#include <iostream>
#include <vector>
#include <algorithm>

struct Point{
    int x;
    int y;

    Point(const int& x, const int& y): x(x), y(y) {}
};

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int N;  //점의 개수
    std::cin >> N;
    std::vector<Point> point_v;
    for(int i = 0; i < N; i++) {
        int x, y;
        std::cin >> x >> y;
        point_v.push_back(Point(x, y));
    }
    
    //x기준 오름차순, 같으면 y기준 오름차순
    std::sort(point_v.begin(), point_v.end(), [](const Point& a, const Point& b)->bool{
        if(a.x != b.x) return a.x < b.x;
        return a.y < b.y;
    });

    for(Point p : point_v) {
        std::cout << p.x << ' ' << p.y << '\n';
    }

    return 0;
}