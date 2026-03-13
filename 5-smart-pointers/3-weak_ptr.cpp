#include <iostream>

class Person {
public:
    std::string name;

    Person(std::string name) {
        this->name = name;
        std::cout << "Constructed" << std::endl;
    }

    void say(std::string message) {
        std::cout << this->name << " is saying " << message << std::endl;
    }

    ~Person() {
        std::cout << "Destructed" << std::endl;
    }
};

int main() {
    std::shared_ptr<Person> obj_ptr = std::make_shared<Person>("John");
    
    std::weak_ptr<Person> weak_ptr0 = obj_ptr;
    
    if(auto sharedLock = weak_ptr0.lock()) {
        std::cout << "Still Alive" << std::endl;
    } else {
        std::cout << "Object is deleted" << std::endl;
    }

    obj_ptr.reset();

    if(weak_ptr0.expired()) {
        std::cout << "Object is gone now." << std::endl;
    }

    return 0;
}
