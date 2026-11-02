#include <iostream>
using namespace std;

// C++ Array ADT - Deleting an element

int main(){
    int A[10], length, index;
    cout << "Enter the length of the array (maximum 10): ";
    cin >> length;

    for(int i = 0; i < length; i++){
        cout << "Enter the element at index: " << i << " : ";
        cin >> A[i];
    }

    cout << "Enter the index of the element you wish to delete: ";
    cin >> index;

    for(int i = index; i < length - 1; i++){
        A[i] = A[i+1];
    }
    length--;

    cout << "The new array after deleting the element is: \n";
    for(int i = 0; i < length; i++){
        cout << A[i] << " ";
    }
    return 0;
}