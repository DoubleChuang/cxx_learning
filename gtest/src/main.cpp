#include <iostream>
#include "stack.hpp"

using namespace std;

int main(int argc, char **argv){
    unique_ptr<Stack> stack = make_unique<Stack>();
    stack->push(1);
    stack->push(1);
    cout << stack->size() << endl;
}