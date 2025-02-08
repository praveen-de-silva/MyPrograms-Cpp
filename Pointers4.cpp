#include <iostream>
#include <cassert>  // Needed for static_assert
using namespace std;

void foo() {  // Fixed function declaration
    char szText[] = "Hello";
    char* p1 = szText;

    static_assert(sizeof(szText) == 6, "szText is not 6 bytes long");  // Fixed assertion
    
}

void test2() {
    int j = 20;
    int *ptr1 = &j;
    
    cout << j << endl;
    
    *ptr1 = 30;
    
    cout << j << endl;
}

void test3() {
    int j = 20;
    int * ptr1 = &j;
    int ** ptr2 = &ptr1;
    int *** ptr3 = &ptr2;
    
    cout << j << endl;
    
    ***ptr3 = 30;
    
    cout << j << endl;
}

int main() {
    test3();
    return 0;
}