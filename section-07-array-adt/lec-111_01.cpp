#include <iostream>
using namespace std;

// C++ Array ADT - Reversing an Array

// Other important functions:
// 1. Left shift (last element becomes 0, first vanishes)
// 2. Right shift (first element becomes 0, last vanishes)
// 3. Left rotate (last element becomes first element, else shifted left)
// 4. Right rotate (first element becomes last element, else shifted right)

void reverse1(int *A, int length);
void swap(int *x, int *y);
void reverse2(int *A, int length);

int main(){
    int arr[] = {1, 5, 12, 10, 2, 1};
    int length = sizeof(arr)/sizeof(arr[0]);

    reverse1(arr, length);
    reverse2(arr, length); // returns original array back as reverse is performed TWICE on same array
    return 0;
}

void reverse1(int *A, int length){
    int B[length];

    for(int i = 0, j = length-1; i < length; i++, j--){
        B[j] = *(A+i);
    }

    for(int k = 0; k < length; k++){
        *(A+k) = B[k];
    }

    cout << "After reversing, the array is (reverse1): \n";
    for(int l = 0; l < length; l++){
        cout << *(A+l) << " ";
    }
    cout << "\n";
}

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void reverse2(int *A, int length){
    for(int i = 0; i < length/2; i++){
        swap(A+i, A+length-i-1);
    }

    cout << "After reversing, the array is (reverse2): \n";
    for(int l = 0; l < length; l++){
        cout << *(A+l) << " ";
    }
    cout << "\n";
}