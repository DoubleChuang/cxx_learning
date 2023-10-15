// 

#include <iostream>

template<typename T>
T max(T a, T b) {
  return (a > b) ? a : b;
}

int main() {
  int _max = max(1, 2);
  std::cout << _max << std::endl;
  double f_max = max(1.1, 2.5);
  std::cout << f_max << std::endl;


  return 0;
}
