#include <stdio.h>
#include <stdlib.h>

int main() {
    int size;

    printf("Enter Size to allocate: ");
    scanf("%d", &size);

    int *m_arr = malloc(size * sizeof(int));

    for(int i = 0; i < size; i++) {
        printf("%d ", m_arr[i]);
    }

    free(m_arr);
    m_arr = NULL;

    printf("\n\n\n");

    int *arr = calloc(size, sizeof(int));

    if(arr == NULL) {
        return 1;
    }

    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    free(arr);
    arr = NULL;

    return 0;
}