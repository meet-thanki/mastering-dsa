#include <iostream>
using namespace std;

// C and C++ Structures

struct Rectangle{
    int length;
    int breadth;
    char x;
}; // variable can be directly declared here (global variable) like --> r1, r2, r3

int main(){
    struct Rectangle r1, r2;
    r2 = {20, 30};
    r1.length = 50;
    r1.breadth = 60;

    // C style code in C++. Works fine.
    printf("%lu\n", sizeof(Rectangle)); // struct padding - 12 bytes is the answer. actual size should have been 9 bytes. (last 3 are discarded)
    printf("%lu\n", sizeof(r1));

    printf("The area of the rectangle r1 is: %d\n", r1.length*r1.breadth);
    printf("The area of the rectangle r2 is: %d", r2.length*r2.breadth); // C style
    return 0;
}