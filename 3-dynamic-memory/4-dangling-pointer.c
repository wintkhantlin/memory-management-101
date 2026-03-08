#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = malloc(sizeof(int));
    *ptr = 42;

    printf("Before free: %d\n", *ptr);

    free(ptr);  // Memory is freed, but ptr still points to it

    // Dangling pointer access
    // Undefined behavior, may print garbage or crash
    printf("After free: %d\n", *ptr);

    ptr = NULL; // Properly nullify to avoid dangling pointer

    return 0;
}