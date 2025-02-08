#include <iostream>
using namespace std;

int main() {
    try
    {
        int age = 12;

        if (age>=18) {
            cout << "Successfully logged in!" << endl;
        } else {
            throw (age);
        }
    }
    catch(int age)
    {
        cout << "You cannot login" << endl;;
    }
    
}