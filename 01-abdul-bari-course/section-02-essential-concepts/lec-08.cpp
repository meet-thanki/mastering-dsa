#include <iostream>
#include <stdio.h> // for C style writing of code
using namespace std;

// C and C++ Pointers

// C way of declaration: int *ptr -> useful for multiple declarations
// C++ way of declaration: int* ptr -> emphasises that it is an integer pointer

struct Rectangle{
    int length;
    int breadth;
};

int main(){
    int a = 10;
    int *ptr = &a;
    // int *ptr;
    // ptr = &a; works as well

    // dereferencing
    printf("Using pointer, the value of a is: %d\n", *ptr);
    printf("Using pointer as well as variable reference: %d %d\n", ptr, &a); // gives same address

    // pointers and arrays
    int A[5] = {2, 4, 6, 8, 10};
    int *ptr2;
    ptr2 = A;
    // ptr2 = &A[0]; wors as well


    for(int i = 0; i < 5; i++){
        printf("%d\n", *(ptr2+i));
        // printf("%d\n", ptr2[i]); // ptr2 has assumed the name of the array: A
    }

    // independence of pointer size with datatypes;
    int *p1;
    char *p2;
    float *p3;
    double *p4;
    struct Rectangle *p5;

    printf("%lu\n", sizeof(p1));
    printf("%lu\n", sizeof(p2));
    printf("%lu\n", sizeof(p3));
    printf("%lu\n", sizeof(p4));
    printf("%lu\n", sizeof(p5));

    // heap allocation or Dynamic Memory Allocation 
    // int *ptr3 = (int*)malloc(5*sizeof(*ptr3)); // declaration -> C method
    int *ptr3 = new int[5]; // declaration -> C++ method
    ptr3[0] = 1;
    ptr3[1] = 3;
    ptr3[2] = 5;
    ptr3[3] = 7;
    ptr3[4] = 9; // ptr3 has assumed the name of the heap array

     for(int i = 0; i < 5; i++){
        printf("%d\n", *(ptr3+i));
        // printf("%d\n", ptr3[i]); // ptr2 has assumed the name of the array: A
    }

    // deallocation of heap memory
    // Once the program ends, heap is deleted automatically. still we should deallocate the memory as a good practice.

    // free(ptr3);
    // ptr3 = NULL; // deletion -> C method
    delete[] ptr3; // deletion -> C++ method
    return 0;
}