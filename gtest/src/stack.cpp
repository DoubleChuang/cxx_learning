#include "stack.hpp"

void Stack::push(int v) { vstack.push_back(v); }

int Stack::pop(){
    if (vstack.size() == 0)
    {
        return -1;
    }
    int v = vstack.back();
    vstack.pop_back();
    return v;
}

int Stack::size() { return vstack.size(); }