#include <iostream>
using namespace std;

// 2. Call by address

void swap(int *x, int *y){ // formal parameters must be pointers. Indirect access.
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main(){
    int a = 10; 
    int b = 20;
    swap(&a, &b); // thus, actual parameters are also modified.
    cout << "a is: " << a << "\n" << "b is: " << b;
    return 0;
}