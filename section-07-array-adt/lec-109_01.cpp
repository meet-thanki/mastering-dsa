#include <iostream>
using namespace std;

// C++ Array ADT - Important Functions

// Time Complexity:
int get(int *A, int length, int index); // O(1)
void set(int *A, int length, int index, int value); // O(1)
int max(int *A, int length); // O(n)
int min(int *A, int length); // O(n)
int sum(int *A, int length); // O(n)
int sumR(int *A, int length);
float avg(int *A, int length); // O(n)

int main(){
    int res1, res2, res3, res4, res5;
    float res6;
    int arr[] = {10, 6, 12, 119, 300, 2};
    int length = sizeof(arr)/sizeof(arr[0]);
    res1 = get(arr, length, 3);
    res2 = max(arr, length);
    res3 = min(arr, length);
    res4 = sum(arr, length);
    res5 = sumR(arr, length);
    res6 = avg(arr, length); // will not be affected by set() function as set is called later (call by reference)

    cout << "At given index the element is: " << res1 << "\n";
    cout << "The new array is (after setting new element): \n";
    set(arr, length, 2, 7);
    cout << "\n";

    cout << "The maximum element is: " << res2 << "\n";
    cout << "The minimum element is: " << res3 << "\n";
    cout << "The sum of all elements is: " << res4 << "\n";
    cout << "The sum of all elements is (using recursion): " << res5 << "\n";
    cout << "The average of all elements is: " << res6 << "\n";

    return 0;
}

int get(int *A, int length, int index){
    if(index >= 0 && index < length){
        return *(A + index);
    }
    return -1;
}
void set(int *A, int length, int index, int value){
    if(index >= 0 && index < length){
        *(A + index) = value;
    }

    for(int i = 0; i < length; i++){
        cout << *(A+i) << " ";
    }
}
int max(int *A, int length){
    int max_no = *A;
    for(int i = 0; i < length; i++){
        if(*(A+i) > max_no){
            max_no = *(A+i);
        }
    }
    return max_no;
}
int min(int *A, int length){
    int min_no = *A;
    for(int i = 0; i < length; i++){
        if(*(A+i) < min_no){
            min_no = *(A+i);
        }
    }
    return min_no;
}
int sum(int *A, int length){
    int total = 0;
    for(int i = 0; i < length; i++){
        total += *(A+i);
    }
    return total;
}

int sumR(int *A, int length){
    if(length <= 0){
        return 0;
    }
    return *(A + length-1) + sumR(A, length-1);
}

float avg(int *A, int length){
    int res = sum(A, length);
    return (float)res/length;
}