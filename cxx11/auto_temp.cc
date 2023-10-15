#include<iostream>

template<class Fun, class... Args>
decltype(auto) Example(Fun fun, Args&&... args)
{
    return fun(std::forward<Args>(args)...);
}

// template<typename T>
// T max(T a, T b){
//     return (a > b)?a:b;
// }

int max(int a, int b){
    return (a > b)?a:b;
}

int sum(std::initializer_list<int> nums){
    auto temp = 0;
    for (auto num: nums){
        temp += num;
    }
    return temp;
}

int main(int argc, char** argv){

    std::cout << Example(max, 1, 2) << std::endl;
    auto li = {1, 2}; // std::initializer_list<int>
    
    std::cout << Example(sum, li) << std::endl;
    return 0;
}