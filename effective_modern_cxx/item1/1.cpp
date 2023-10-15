#include <iostream>

using namespace std;

int main(int argc, char **argv){
    const int a = 1;
    int b = a;
    cout << a << endl;

    // const int * const p = &a;
    const int * const p = new int(10);
    cout << p << " " <<  *p << endl;

    // int *c = p; // (X)
    int const *c = p;
    cout << c << " " << *c << endl;

    // int &d = a; // (X)
    const int &d = a;

    const char* ch = "123";
    // char* p_ch = ch; // (X)
    const char* p_ch = ch;
    const char* const p_ch1 = ch;
    // const char& p_ch2 = ch; // (X)

    const char ch_array[] = "456";
    // const char ch_array1[] = ch_array; ( X )
    // char *ch_array_p = ch_array; // (X)
    const char* ch_array_p = ch_array;
    const char& ch_array_p1 = *ch_array;
    cout << ch_array_p1 << " " << ch_array_p << endl;
}