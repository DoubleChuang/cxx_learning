// g++ for.cc -o for -std=c++11

#include <iostream>
#include <vector>


int main(){
    std::vector<int> arr = {1,2,3,4};

    
    // C++03
    for (int i = 0; i<arr.size(); ++i) {
        std::cout << arr[i] << std::endl;
    }

    // C++11
    for (auto& num: arr){
        std::cout << num << std::endl;
    }
    return 0;
}