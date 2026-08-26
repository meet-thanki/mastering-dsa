#include <iostream>
using namespace std;

int main(){
    // declaration with initilisation
    // int A[5] = {2, 4, 6, 8, 10}; // prints 2, 4, 6, 8, 10
    // alter way: int A[] = {2, 4, 6, 8, 10}; // works fine too
    // int A[5] = {2, 4, 6, 8}; // one element left uninitialised --> by default init to 0

    // writing to array by indexing
    // A[0] = 2;
    // A[1] = 4;

    int n;
    cin >> n;
    int A[n]; // this cannot be intialised. (contains garbage values if not initialised) must use either
    // 1. manual indexing to write to array
    // or 2. manual input by using input for loop.
    A[0] = 53;
    A[1] = 55; // insignificant if n == 1.

    for(int x:A){
        cout << x << "\n";
    }
    /*for(int i = 0; i < 5; i++){
        cout << A[i] << "\n";
    }*/
    return 0;
}