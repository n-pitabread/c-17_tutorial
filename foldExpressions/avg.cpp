#include<iostream>

template<typename ... T>
auto avg(T ... t) {
    return (t + ...) / sizeof...(t);
}

int main() {
    std::cout << avg(1.0,2.0,3.0);
}
