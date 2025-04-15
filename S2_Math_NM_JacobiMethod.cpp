// Online C++ compiler to run C++ program online
#include <iostream>
#include <map>
#include <cmath>

using namespace std;

double func1(double x2, double x3, double x4) {
    return (0 - (-50*x2)) / 200;
}

double func2(double x1, double x3, double x4) {
    return (0 - (50*x1 + 75*x3)) / (-125);
}

double func3(double x1, double x2, double x4) {
    return (0 - (75*x2 + 225*x4)) / (-300);
}

double func4(double x1, double x2, double x3) {
    return (9806.65 - (-225*x3)) / 225;
}

int main() {
    double x1 = 65.5, x2 = 261.5, x3 = 392.5, x4 = 435.5;
    double norm = 0, norm_prev = 0;
    
    for (int i=1; i<1000; i++) {
        norm = max(abs(x1), max(abs(x2),  max(abs(x3), abs(x4))));
        
        cout << "=== Iteration : " << i << " ==="
             << "\nx1 : " << x1 
             << "\nx2 : " << x2 
             << "\nx3 : " << x3
             << "\nx4 : " << x4 
             << "\nError : " << abs(norm - norm_prev) / norm << endl;
                     
        x1 = func1(x2, x3, x4);
        x2 = func2(x1, x3, x4);
        x3 = func3(x1, x2, x4);
        x4 = func4(x1, x2, x3);
        norm_prev = norm;
    }
    return 0;
}