#include <iostream>
using namespace std;

// C and C++: Parameter Passing Methods
// 1. Pass by value

void swap(int x, int y){ // formal parameeters are modified
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main(){
    int a, b;
    a = 10;
    b = 20;
    swap(a, b); // but actual parametes remain the same
    cout << "a is: "<< a << "\n"<< "b is: " << b; // outputs 10 20
    return 0;
}