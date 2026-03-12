/**
 * There are multiple "co-owners". The object is only deleted when the very last co-owner stops using it.
 */

#include <iostream>

int main() {
    std::shared_ptr<int> num0;

    {
        std::shared_ptr<int> num = std::make_shared<int>(10);
        num0 = num; // the object is not deleted
    }
    
    std::cout << num0 << std::endl;
    std::cout << *num0 << std::endl;

    num0.reset(); // not raw pointer. cannot use delete num0

    std::cout << num0 << std::endl; // 0x0
    
    return 0;
}
