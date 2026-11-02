#include <iostream>
using namespace std;

// C++ Array ADT - Inserting an element

int main(){
    int A[10], length, index, value;
    cout << "Enter the length of the array (maximum 10): ";
    cin >> length;

    for(int i = 0; i < length; i++){
        cout << "Enter the element at index: " << i << " : ";
        cin >> A[i];
    }

    cout << "\nEnter the index at which you wish to insert element: " ;
    cin >> index;

    cout << "Enter the value: ";
    cin >> value;

    for(int i = length; i > index; i--){
        A[i] = A[i-1];
    }   
    length++;
    A[index] = value;

    cout << "The new array after inserting element is: \n";
    for(int i = 0; i < length; i++){
        cout << A[i] << " ";
    }
    return 0;
}