#include <iostream>  
using namespace std;

void change(int *num) {
    static int i = 40;  // Use static to prevent out-of-scope issues
    *num = i;          
}

int main() {
    int number = 20;
    int *ptr = &number;  // Pointer to number

    cout << "Before change: " << number << endl;

    change(ptr);  // Pass pointer to pointer

    cout << "After change: " << number << endl;  
    return 0;
}
