#include <iostream>
using namespace std;

// C++ References

int main(){
    int a = 10;
    int &r = a; // must be initialised here itself. r is an alias (nickname) to a.
    // so r equivalent to a from now on
    // r does not consume memory. Tt uses the same memory of a. HENCE SAME ADDRESSES.
    // We do not know how compiler allocates it.
    int b = 30;
    r = b; // this does not mean r is reference to b. it is just assigned b.
    a += 15;
    cout << a << "\n"; // 45
    cout << r << "\n"; // 45

    // same memory addresses
    int *ptr1 = &a;
    int *ptr2 = &r;

    cout << ptr1 << "\n"; // printing memory addresses
    cout << ptr2 << "\n";
    cout << boolalpha;
    cout << (ptr1==ptr2) << "\n"; // true as both point to same memory address
    return 0;
}