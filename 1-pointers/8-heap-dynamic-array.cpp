#include <iostream>

int main() {
    std::vector<int>* v = new std::vector<int>{}; // create dynamic array in the heap

    for(int i = 0; i < 10; i++) {
        v->push_back(i);
    }

    for(int i = 0; i < v->size(); i++) {
        std::cout << v->at(i) << std::endl;
    }

    std::cout << v << std::endl;

    delete v;
    v = nullptr;

    return 0;
}
