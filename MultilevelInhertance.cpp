#include <iostream>

class Base {
public:
    void display() {
        std::cout << "Base class display function" << std::endl;
    }
};

class Derived1 : public Base {
public:
    void show() {
        std::cout << "Derived1 class show function" << std::endl;
    }
};

class Derived2 : public Derived1 {
public:
    void print() {
        std::cout << "Derived2 class print function" << std::endl;
    }
};

int main() {
    Derived2 obj;
    obj.display();
    obj.show();
    obj.print();
    return 0;
}