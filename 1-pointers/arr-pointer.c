#include <stdio.h>

int main() {
  int arr[3] = {1, 2, 3};

  int *arr_ptr = arr;

  printf("%d\n", *arr_ptr);
  printf("%d\n", *(arr_ptr+1));
  printf("%d\n", *(arr_ptr+2));
  
  printf("%p\n", &arr[0]);
  printf("%p\n", &arr[1]);
  printf("%p\n", &arr[2]);
  
  return 0;
}
