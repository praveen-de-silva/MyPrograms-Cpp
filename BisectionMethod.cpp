// Online C++ compiler to run C++ program online
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double func(double x) {
    return 70 * exp(-1.5 * x) + 25 * exp(-0.075 * x) - 9;
    // return x*x*x + 4*x*x - 10;
}

void bisectionMethod(double a, double b) {
    static int count = 0;
    
    // invalid condition
    if (func(a) * func(b) > 0) {
        cout << "No sol between " << a << " and " << b << endl; 
        return;
    }
    
    // if 'a' is a sol
    if (func(a) == 0) {
        cout << "Sol : "  << a << endl;
        return;
    }
    
    // if 'b' is a sol
    if (func(b) == 0) {
        cout << "Sol : "  << b << endl;
        return;
    }
    
    count++;
    
    double p = (a + b) / 2;
    cout << setw(3) << count << "   "
         << setw(10) << fixed << setprecision(6) << a 
         << setw(10) << fixed << setprecision(6) << b 
         << setw(12) << fixed << setprecision(6) << fabs((p - b) / p) 
         << endl;
    
    
    
    // if 'p' is a sol
    if (fabs((p - b) / p) <= 0.0001) {
        cout << "\nSol : "  << p << " (" << func(p) << ") " << endl;
        return;
    }
    
    // if the solution has in the left side
    if (func(a) * func(p) < 0) {
        return bisectionMethod(a, p);
    }
    
    // if the solution has in the right side
    if (func(a) * func(p) > 0){
        return bisectionMethod(p, b);
    }
}


int main() {
    // cout << func(20000)   << endl;
    cout << setw(3) << "n" << "   "
         << setw(10) << "a    " 
         << setw(10) << "b    "
         << setw(12) << "Rel Err " 
         << endl;
    bisectionMethod(5, 15);
    

    return 0;
}