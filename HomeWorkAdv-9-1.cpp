#include <iostream>
#include <vector>

template<class T>
void move (std::vector<T>& alive_v, std::vector<T>& dying_v) {
    alive_v = std::move(dying_v);
}

template<class P>
void print_v(std::vector<P>& printed_v) {
    for (const auto& i: printed_v) {
        std::cout << i << " ";
    }
    std::cout << "\n";
}

int main() {
    std::vector <std::string> one_s = { "test_string", "test_string" };
    std::vector <std::string> two_s;
    move(two_s, one_s);
    print_v(two_s);

    std::vector<int> one_i = {5,4,3,2,1};
    std::vector<int> two_i;
    move(two_i, one_i);
    print_v(two_i);
}