#include "Checkout.hpp"

Checkout::Checkout() : total(0)
{
}

void Checkout::addItemPrice(string item, int price)
{
    prices[item] = price;
}

void Checkout::addItem(string item)
{
    total += prices[item];
}

int Checkout::calculateTotalPrice()
{
    return total;
}