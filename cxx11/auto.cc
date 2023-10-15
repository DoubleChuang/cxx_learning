// g++ auto.cc -o auto -std=c++11

#include <iostream>

int main(){
    auto i = 1;
    auto d = 2.2;
    auto f = 3.33;
    auto t = "string";
    auto p = nullptr;

    std::cout << i << std::endl;
    std::cout << d << std::endl;
    std::cout << f << std::endl;
    std::cout << t << std::endl;
    std::cout << p << std::endl;

    return 0;
}