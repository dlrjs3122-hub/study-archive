#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

struct Person{
    std::string name;
    int year;
    int month;
    int day;
    Person(const std::string& name, const int& year, const int& month, const int& day) :
        name(name), year(year), month(month), day(day) {}
};

int main() {
    int n;
    std::cin >> n;
    std::vector<Person> v;

    for(int i = 0; i < n; i++) {
        std::string name;
        int year, month, day;
        std::cin >> name >> day >> month >> year;
        v.push_back(Person(name, year, month, day));
    }

    std::sort(v.begin(), v.end(), [](const Person& a, const Person& b)->bool {
        if(a.year != b.year) return a.year < b.year;
        if(a.month != b.month) return a.month < b.month;
        return a.day < b.day;
    });

    std::cout << v[v.size()-1].name << '\n' << v[0].name;

    return 0;
}