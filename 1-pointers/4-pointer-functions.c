#include <stdio.h>

void increment(int *p) {
    (*p)++; // Dereference p and increase the value by 1
}

void swap(int *a, int *b) {
    int temp = *a; // Store value of a
    *a = *b; // Assign value of b to a
    *b = temp; // Assign temp (original a) to b
}

void print_array(int *arr, int size) {
    for(int i = 0; i < size; i++) {
        printf("%d\n", arr[i]);
    }
}

int main() {
    int x = 5;
    printf("Before increment: %d\n", x);

    increment(&x); // Pass address of x to function

    printf("Before increment: %d\n", x);
 
    int a = 20, b = 10;
    
    printf("Before swap: a=%d, b=%d\n", a, b);

    swap(&a, &b);

    printf("Before swap: a=%d, b=%d\n", a, b);

    int arr[5] = { 1, 2, 3, 4, 5};

    print_array(arr, 5);

    return 0;
}