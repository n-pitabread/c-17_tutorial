#include<iostream>

// fold expression
template<typename ... T>
auto avg(T ... t) {
    // sum all arguments and divided by the number of all arguments
    return (t + ...) / sizeof...(t);
}

int main() {
    std::cout << avg(1.0,2.0,3.0);
}
