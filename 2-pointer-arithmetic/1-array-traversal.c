#include <stdio.h>

int main() {
    int arr[5] = { 1, 2, 3, 4, 5 };
    
    int *arr_ptr = arr; // pointer pointing to the first element of the array (same as &arr[0])

    for(int i = 0; i < 5; i++) {
        printf("%p\n", arr_ptr);
        printf("%d\n", *arr_ptr); // dereference the pointer to get the value stored at that memory address
        arr_ptr++; // move the pointer to the next integer in memory (moves by sizeof(int), usually 4 bytes)
    }

    return 0;
}