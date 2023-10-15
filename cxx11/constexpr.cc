#include <iostream>

constexpr int calc(int n){
    if (n % 2 == 0) { // C++11 compile error
      return n * n;
    }
    
    int a = 10; // C++11 compile error
    return n * n + a; // C++11 compile error
}

constexpr int sq(int n){
    return n * n;
}

int main(){
    
    constexpr int N = 123;
    constexpr int N_SQ = sq(N);
    constexpr int N_CALC = calc(N);

    std::cout << N << std::endl;
    std::cout << N_SQ << std::endl;
    std::cout << N_CALC << std::endl;
    std::cout << sq(4) << std::endl;
}