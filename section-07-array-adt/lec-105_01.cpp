#include <iostream>
#include <cmath>
using namespace std;

// C++ Array ADT - Binary Search
// Time Complexity:
// Best Case: O(1) - Element at the first index
// Worst Case: O(logn) - Element at the last index
// Average Case: sum(i*2^i)/n = O(logn)


int BinSearch(int A[], int length, int l, int h, int key);
int RBinSearch(int A[], int length, int l, int h, int key);
int no_comparison = 0;
int no_comparison_r = 0; // maximum comparisons or time complexity is of O(logn)

int main(){
    int arr[] = {1, 5, 7, 9, 10, 12}; // Important Condition: The array has to be sorted
    int n = sizeof(arr)/sizeof(arr[0]);
    int ans1 = BinSearch(arr, n, 0, 5, 12);
    int ans2 = RBinSearch(arr, n, 0, 5, 12);

    cout << "Iterative: The required element is at the index: " << ans1 << " with no. of comparisons: "<< no_comparison << " \n";
    cout << "Recursive: The required element is at the index: " << ans2 <<  " with no. of comparisons: "<< no_comparison_r << " \n";
    return 0;
}

int BinSearch(int A[], int length, int l, int h, int key){
    int mid;
    while(l <= h){
        mid = floor((l+h)/2);
        if(key == A[mid]){
            no_comparison++;
            return mid;
        }

        else if(key < A[mid]){
            h = mid - 1;
            no_comparison++;
        }
        else{
            l = mid+1;
            no_comparison++;
        }
    } 

    return -1;
}

int RBinSearch(int A[], int length, int l, int h, int key){
    if(l <= h){
        int mid = floor((l+h)/2);
        
        if(key == A[mid]){
            no_comparison_r++;
            return mid;
            
        }

        else if(key < A[mid]){
            no_comparison_r++;
            return RBinSearch(A, length, l, mid-1, key);
        }
        
        else{
            no_comparison_r++;
            return RBinSearch(A, length, mid + 1, h, key);
        }
    }
    return -1;
}