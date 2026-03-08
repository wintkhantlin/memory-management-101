#include <stdio.h>

int main() {
    int x = 10;  // Declare an integer variable x and assign 10

    int *ptr_of_x = &x;  // Pointer to x, stores the address of x
    int **ptr_ptr_of_x = &ptr_of_x;  // Pointer to pointer, stores the address of ptr_of_x

    printf("%d\n", **ptr_ptr_of_x);  // Dereference twice: get the value of x (10)

    printf("%p\n", ptr_of_x);  // Print the address of x (stored in ptr_of_x)
    printf("%p\n", ptr_ptr_of_x);  // Print the address of ptr_of_x (stored in ptr_ptr_of_x)
    printf("%p\n", &ptr_ptr_of_x);  // Print the address of ptr_ptr_of_x

    return 0;
}