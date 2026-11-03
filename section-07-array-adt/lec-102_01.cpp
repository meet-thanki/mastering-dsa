#include <iostream>
using namespace std;

// C++ Array ADT - Linear Search
// Time Complexity:
// Best-Case: O(1) - Element at the first index
// Worst-Case: O(n) - Element at the last index
// Average-Case: (n*(n+1)/2)/n = O(n)

int LinSearch(int A[], int length, int key);
int ImpLinSearch(int A[], int length, int key);

int main(){
    int arr[] = {1, 2, 4, 5, 8, 10}; // Important Condition: Assuming all entries of elements are unique.
    int ans; 
    ans = ImpLinSearch(arr, 6, 2);
    cout << "The required index is: " << ans << "\n";

    cout << "After searching, the array is: ";
    for(int i = 0; i < 6; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
    return 0;
}

int LinSearch(int A[], int length, int key){
    for(int i = 0; i < length; i++){
        if(A[i] == key){
            return i;
        }
    }
    return -1;
}

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int ImpLinSearch(int *A, int length, int key){
    for(int i = 0; i < length; i++){
        if(*(A+i) == key){
            swap(A+i, A+i-1);
            return i;
        }
    }

    return -1;
}