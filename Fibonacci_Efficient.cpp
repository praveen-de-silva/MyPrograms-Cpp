// Online C++ compiler to run C++ program online
#include <iostream>
#include <chrono>
#include <map>

using namespace std;
using namespace std::chrono;



int fib(map<int, int>& data, int n) {
    
    if (n < 2) {
        return n;
    }
    
    if (data[n]!=0) {
        return data[n];
    }
    
    
    int crntResult = fib(data, n-1) + fib(data, n-2);
    data[n] = crntResult;
    return crntResult;
}

int main() {
    map<int, int> data; 
    
    auto start = high_resolution_clock::now();
    // Write C++ code here
    cout << fib(data, 40) << endl;
    
    auto end = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds> (end - start);
    cout << duration.count() << endl;
    

    return 0;
}