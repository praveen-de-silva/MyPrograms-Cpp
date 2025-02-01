#include <iostream>
using namespace std;

class Parent1 { // Parent class 1
    public:
        int x=1; 
};

class Parent2 { // Parent class 2
    public:
        int y=2;
};

class Child : public Parent1, public Parent2 { // Child class

};

int main()
{
    Child child;

    cout << "x : " << child.x << "\ny : " << child.y;
    return 0;
}
