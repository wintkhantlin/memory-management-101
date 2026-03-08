#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = malloc(sizeof(int));
    *ptr = 42;

    printf("Value: %d\n", *ptr);

    free(ptr);      // first free
    // free(ptr);   // second free → BAD

    ptr = NULL;     // safe practice

    return 0;
}