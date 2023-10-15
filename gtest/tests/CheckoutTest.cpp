#include <gtest/gtest.h>
#include <gtest/gtest.h>
#include "Checkout.hpp"

class CheckoutTest : public ::testing::Test{
protected:
    Checkout checkout;
};

TEST_F(CheckoutTest, CheckTotalTest)
{
    checkout.addItemPrice("apple", 1);
    checkout.addItem("apple");

    int total = checkout.calculateTotalPrice();

    ASSERT_EQ(total, 1);
}