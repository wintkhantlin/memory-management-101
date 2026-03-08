#include <stdio.h>

int main() {
    // allocate a value
    int x = 10;
    // get the memory address of the variable x
    int *p = &x;

    printf("%d\n", x);
    printf("%p\n", &x);
    printf("%p\n", p);
    printf("%d\n", *p);

    return 0;
}