#include <iostream>
using namespace std;

// C and C++ Call by Address

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
} // no return required as changes are reflected in actual parameters
// when two variables are required to be returned, we use send by address.

int main(){
    int num1, num2;
    num1 = 10;
    num2 = 15;
    swap(&num1, &num2);

    cout << num1 << "\n";
    cout << num2;
    return 0;
}