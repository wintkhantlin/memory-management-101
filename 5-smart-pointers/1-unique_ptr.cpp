#include <iostream>

int main() {
    // can use auto num = std::make_unique<int>();
    std::unique_ptr<int> num = std::make_unique<int>();

    *num = random();
    
    std::cout << *num << std::endl;

    std::cout << num << std::endl;

    num.reset();

    std::cout << num << std::endl; // return 0x0
    
    return 0;
}
