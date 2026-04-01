#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int N;  //단어의 개수
    std::cin >> N;
    std::vector<std::string> v(N);  //문자열 저장할 벡터
    for(int i = 0; i < N; i++)
        std::cin >> v[i];

    //길이가 짧은 것부터 길이가 같으면 사전 순으로 정렬
    std::sort(v.begin(), v.end(), [](const std::string& a, const std::string& b)->bool {
        if(a.size() != b.size()) return a.size() < b.size();
        return a < b;
    });


    //중복을 무시하며 출력
    std::cout << v[0] << '\n';
    for(int i = 1; i < N; i++) {
        if(v[i] != v[i-1]) std::cout << v[i] << '\n';
    }

    return 0;
}