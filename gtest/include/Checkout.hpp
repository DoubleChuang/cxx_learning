#ifndef __CHECKOUT_H__
#define __CHECKOUT_H__
#include <string>
#include <map>

using namespace std;

class Checkout{
public:
    Checkout();
    virtual ~Checkout(){};

    void addItemPrice(string, int);
    void addItem(string);
    int calculateTotalPrice();
protected:
    map<string, int> prices;
    int total;
};


#endif // __CHECKOUT_H__