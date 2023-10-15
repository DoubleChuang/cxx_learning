#ifndef __STACK_H__
#define __STACK_H__

#include <vector>

using namespace std;

class Stack
{
    vector<int> vstack{};

public:
    void push(int v);
    int pop();
    int size();
};

#endif // __STACK_H__