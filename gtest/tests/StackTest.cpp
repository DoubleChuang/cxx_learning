#include <gtest/gtest.h>
#include <vector>
#include "stack.hpp"

using namespace std; 

class StackTest : public testing::Test {

public:
    unique_ptr<Stack> stack = make_unique<Stack>();

    void SetUp(){
        cout << "Alive" << endl;
        for (int i=0 ;i<10; i++){

            stack->push(i);
        }
    }
    void TearDown(){
        cout << "Dead" << endl;
    }
};

TEST_F(StackTest, PopTest){
    int v;
    for (int i=9; i>=0; i--){
        v = stack->pop();
        ASSERT_EQ(v, i);
    }
}

TEST_F(StackTest, SizeTest){
    int v=10;
    for (int i = 9; i > 0; i--)
    {
        ASSERT_EQ(v, i+1);
        stack->pop();
        v = stack->size();
        ASSERT_EQ(v, i);
        
    }
}

int main(int argc, char** argv) {

    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
