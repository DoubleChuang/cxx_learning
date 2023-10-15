#include <iostream>

void ref(int&& x) {
    std::cout << "Left value: " << x << std::endl;
}

int min(int a, int b){
    return (a<b)?a:b;
}

int main() {

    ref(min(1, 2)); // print: "Left value: 3"
    ref(3); // complier error !
    return 0;
}

