#include <iostream>

int main() {
    int value = 10; // create value on stack
    int* ptr = &value;

    std::cout << value << std::endl;
    std::cout << ptr << std::endl;

    return 0;
}
