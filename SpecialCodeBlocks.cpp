#include <iostream>
#include <vector>

using namespace std;

void printArr(vector<int> arr) { // print array elements
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    /*  
    ==========================
    Convert string to interger
    ==========================
    */

    // === Method 01 : Using 'stoi' (String TO Integer) ===
    string numStr = "12";
    int numInt = stoi(numStr);

    cout << numInt << endl;


    /*  
    ================================================
    Initialize a Vector Array filled with a constant
    ================================================
    */
    // vector<int> myArr(5, 0); 

    // printArr(myArr);



}