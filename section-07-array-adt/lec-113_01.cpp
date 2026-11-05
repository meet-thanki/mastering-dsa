#include <iostream>
using namespace std;

// C++ Array ADT - Sorting Arrays and Related Functions

void insert_sorted(int *A, int length, int key); // assumed ascending order, insert element in sorted array
int check_sorted(int *A, int length);
void sign_separation(int *A, int length);

int main(){
    int arr[10];
    int length, check;
    cout << "Enter the number of elements you want to store (maximum 10): ";
    cin >> length;
    
    for(int i = 0; i < length; i++){
        cout << "Enter the element (sorted in ascending)"<< i<< ": ";
        cin >> arr[i];
    }
    /*insert_sorted(arr, length, 19);
    check = check_sorted(arr, length);

    cout << boolalpha;
    cout << "Is the array sorted? "<< (check==1) << "\n";*/

    sign_separation(arr, length);
    return 0;
}

void insert_sorted(int *A, int length, int key){
    int i = length;
    while(key < *(A+i-1)){
        *(A+i) = *(A+i-1);
        i--;
    }
    *(A+i) = key;
    length++;
    cout << "The new array after inserting the element is: ";
    for(int j = 0; j < length;  j++){
        cout << *(A+j) << " ";
    }
    cout << "\n";
}

int check_sorted(int *A, int length){
    for(int i = 0; i < length-1; i++){
        if(A[i] > A[i+1]){
            return 0;
        }
    }
    return 1;
}

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void sign_separation(int *A, int length){
    // we take 2 index pointers, i and j

    int i = 0;
    int j = length-1;
     while (i < j) {
        while (i < length && *(A+i) < 0) {
            i++;
        }
        
        while (j >= 0 && *(A+j) >= 0) {
            j--;
        }
        
        if (i < j) {
            swap((A+i), (A+j)); 
            i++;                      
            j--;
        }
    }

    for(int k = 0; k < length; k++){
        cout << *(A+k) << " ";
    }
    cout << "\n";
}