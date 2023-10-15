#include <iostream>
#include <vector>

int main(){

    std::vector<int> v{1, 2, 3, 4, 5};
    for (auto i : v)
    {
        std::cout << i ;
    }
    std::cout << std::endl;

    std::vector<int> ve = {6, 7, 8, 9, 0};
    for (auto i : ve)
    {
        std::cout << i;
    }
    std::cout << std::endl;

    int a{2};
    std::cout << a << std::endl;

    std::vector<std::pair<int, int>> x{{3, 4}, {5, 6}};
    for (const auto &[b, c] : x)
    {   
        std::cout << b << c << std::endl;
    }

    return 0;
}