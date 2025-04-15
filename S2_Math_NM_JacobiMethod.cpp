// Online C++ compiler to run C++ program online
#include <iostream>
#include <map>

using namespace std;

double func1(double x2, double x3) {
    return (7 - (2*x2 + 3*x3)) / 9;
}

double func2(double x1, double x3) {
    return (2 - (1*x1 + 9*x3)) / 12;
}

double func3(double x1, double x2) {
    return (1 - (4*x1 + 6*x2)) / 14;
}

int main() {
    double x1 = 0, x2 = 0, x3 = 0;
    double x1_prev = 0, x2_prev = 0, x3_prev = 0;
    
    for (int i=0; i<20; i++) {
        cout << "=== Iteration : " << i << " ==="
             << "\nx1 : " << x1 << ", Error : " << (x1 - x1_prev) / x1 
             << "\nx2 : " << x2 << ", Error : " << (x2 - x2_prev) / x2 
             << "\nx3 : " << x3 << ", Error : " << (x3 - x3_prev) / x3 << endl;
        
        x1_prev = x1;
        x2_prev = x2;
        x3_prev = x3;
             
        x1 = func1(x2, x3);
        x2 = func2(x1, x3);
        x3 = func3(x1, x2);
    }
    

    return 0;
}