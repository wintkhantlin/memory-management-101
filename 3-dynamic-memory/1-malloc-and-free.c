#include <stdio.h>
#include <stdlib.h>

int main() {

    // Allocate memory on the heap for one integer
    int *ptr = malloc(sizeof(int));

    // Check if malloc failed (returns NULL if memory allocation fails)
    if (ptr == NULL) {
        return 1;
    }

    // Store value 10 in the allocated memory
    *ptr = 10;

    // Print the value stored in the allocated memory
    printf("%d\n", *ptr);

    // Free the allocated memory to avoid memory leaks
    free(ptr);

    // Set pointer to NULL to avoid dangling pointer
    ptr = NULL;

    return 0;
}