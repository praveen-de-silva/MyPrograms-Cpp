#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

// print the array
void printArr(vector<int> &arr) { 
    for (int num : arr) {
        cout << num << " ";
    }   
}

int main() {
    int arrSize;
    string userInp;
    
    cin >> arrSize;
    cin.ignore();
    getline(cin, userInp);
    
    stringstream ss(userInp);
    int tempNum;
    vector<int> nums;
    
    while (ss >> tempNum) {
        nums.push_back(tempNum);
    }
    
    printArr(nums);
}