// Online C++ compiler to run C++ program online
#include <iostream>
#include <algorithm>

using namespace std;


string reverseStr(string str) {
    string res = "";  // the result
    string temp = ""; // for temporal purpose
    
    // iterate throug the string
    for (auto it = str.begin(); it != str.end(); ++it) {
        char ltr = *it; // it is a iterator (not a char or string)
        if (ltr == ' ' || it == str.end()-1) {
            // reverse 'temp' using 'algorithm' library
            reverse(temp.begin(), temp.end());
            
            // updating result
            res += temp + " ";
            
            // clear temp
            temp = "";
        }
        
        // if ltr is not space or end, update the temp
        temp += ltr;
    }
    
    return res;
}

int main() {
    // Write C++ code here
    string s = "Try programiz.pro";
    cout << reverseStr(s) << endl;
    

    return 0;
}