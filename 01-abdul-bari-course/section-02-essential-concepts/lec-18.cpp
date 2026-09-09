#include <iostream>
using namespace std;

// array is always passed by address, never by value, nor by reference.

void fun(int *A, int n){ // both A[] and *A can be used
    /*cout << sizeof(A)/sizeof(int) << "\n";  Here A is interpreted as a pointer 
    and hence value printed is 1 as sizeof int* and int is same as 8 bytes*/


    // using for-each loop does not work for normal array inputs 
    /*for(int a: A){
        cout << a << "\n";
    }  cannot be used like an array as A is a pointer*/
    

    // using for loop to print elements of the array
    /*for(int i = 0; i < n; i++){
        cout << A[i] << "\n";
    }*/

    A[0] = 15; // the formal paramter is also changed.

}


// returning arrays from functions
int *fun2(int size){
    int *ptr = new int[size]; // dynamically allocating an array

    for(int i=0; i<size; i++){
        *(ptr+i) = i+1;
    }

    return ptr;
}



int main(){
    // int A[] = {2, 4, 6, 8, 10};
    // int n = 5;
    // fun(A, 5);
    // // cout << sizeof(A)/sizeof(int) << "\n";

    // for(int x: A){
    //     cout << x << "\n";
    // }

    int *ptr, size = 7;
    ptr = fun2(size);

    for(int i = 0; i < size; i++){
        cout << *(ptr+i) << "\n";
    }
    
    return 0;
}