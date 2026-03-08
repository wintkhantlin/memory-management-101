#include <stdio.h>
#include <stdlib.h>

int main() {
    int number = 10;
    int *numbers = malloc(number * sizeof(int));

    int newNumber = 15;

    int *tempNumbers = realloc(numbers, newNumber * sizeof(int));

    if (!tempNumbers) {
        free(numbers);
        return 1;
    }
    numbers = tempNumbers;

    free(numbers);
    numbers = NULL;

    return 0;
}