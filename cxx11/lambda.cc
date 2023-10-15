#include<iostream>

int main(){

    // int x = 0, y = 0;

    // [=](int i) { return i > x && i < y; };

    char a[13] = "Hello, world";
    
    printf("%c\n", *(a+4));
    *(a+4) = 'k';
    printf("%s\n", a);

    return 0;
}


