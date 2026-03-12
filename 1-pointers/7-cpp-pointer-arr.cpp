#include <iostream>

int main() {
    char* arr = new char[10];

    char *ptr = arr;
    char ch = 'a';

    for(int i = 0; i < 10; i++) {
        *ptr = ch;
        ch++;
        ptr++;
    }

    ptr = arr;

    for(int i = 0; i < 10; i++) {
        std::cout << *ptr << std::endl;
        ptr++;
    }

    delete[] arr;
    arr = nullptr;

    return 0;
}
