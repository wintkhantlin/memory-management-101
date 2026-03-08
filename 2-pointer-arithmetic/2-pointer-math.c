#include <stdio.h>

int main() {
    int arr[5] = { 10, 25, 50, 100, 250 };
    
    int *ptr = arr;

    printf("Using pointer arithmetic:\n");

    for(int i = 0; i < 5; i++) {
        printf("Element %d = %d (Address: %p)\n", i, *ptr, ptr);
        ptr++; // move pointer to next integer
    }

    printf("\n-------\nTraversing by moving the pointer:\n-------\n\n");

    ptr = arr; // reset pointer

    for(int i = 0; i < 5; i++) {
        printf("Element %d = %d (Address: %p)\n", i, *ptr, ptr);
        ptr++; // move pointer to next int
    }

    return 0;
}