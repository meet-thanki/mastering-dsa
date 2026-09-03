#include <iostream>
using namespace std;

// C and C++: Pointer to Structure

struct Rectangle{
    int length;
    int breadth;
};

int main(){
    struct Rectangle r = {12, 13}; // in C++ 'struct' is not required to be written explicitly
    cout << r.length << "\n";
    cout << r.breadth << "\n"; // access using dot operator for normal members of struct

    struct Rectangle *ptr = &r;
    cout << ptr->length << "\n";
    cout << ptr->breadth << "\n";

    // dynamic allocation
    struct Rectangle *hptr = (struct Rectangle*)malloc(sizeof(struct Rectangle)); // malloc returns a pointer which is void. so typecasting is necessary.
    // in C++: Rectangle *hptr = new Rectangle; // in heap
    // initialise values
    hptr->length = 13;
    hptr->breadth = 12;

    printf("%d", (hptr->length)*(hptr->breadth)); // area from data in heap memory
    return 0;
}