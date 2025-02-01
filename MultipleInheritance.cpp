#include <iostream>
using namespace std;

class Parent1 {
    public:
        int x=1; 
};

class Parent2 {
    public:
        int y=2;
};

class Child : public Parent1, public Parent2 {

};

int main()
{
    Child child;

    cout << "x : " << child.x << "y : " << child.y;
    return 0;
}
