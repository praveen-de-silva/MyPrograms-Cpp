#include <iostream>
#include <cassert>  // Needed for static_assert
using namespace std;

void foo() {  // Fixed function declaration
    char szText[] = "Hello";
    char* p1 = szText;

    static_assert(sizeof(szText) == 6, "szText is not 6 bytes long");  // Fixed assertion
    
}

int main() {
    foo();
    return 0;
}