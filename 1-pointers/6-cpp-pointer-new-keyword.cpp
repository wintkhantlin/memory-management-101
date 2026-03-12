#include <iostream>

int main() {
    int *value = new int;

    *value = 10;

    std::cout << *value << std::endl;
    std::cout << value << std::endl;

    delete value;
    value = nullptr;

    return 0;
}
