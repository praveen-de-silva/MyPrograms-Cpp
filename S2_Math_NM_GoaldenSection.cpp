// Online C++ compiler to run C++ program online
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

/* =====================
 * Golden Section Search
 * =====================
 * 
 * The golden section search is a technique for finding the maximum or minimum of a unimodal function.
 * It is an efficient method that reduces the search interval in each iteration.
 * 
 * The algorithm works by dividing the search interval into two parts using the golden ratio.
 * The golden ratio is approximately 0.6180339887, which is derived from the Fibonacci sequence.
 * 
 * The algorithm continues until the search interval is sufficiently small, at which point the maximum or minimum can be approximated.
 */

class goldenSectionMethod {
private:
    double GR = 0.6180339887;
    double tolerance = 1e-6;
    
public:
    double func(double x) {
        /*
         * The optimizing function 
         */
        return -x*x/10 + 2 * sin(x);
    }
    
    double maxError(double x_l, double x_u, double x_opt) {
        /*
         * to terminate after satisfies the needed tolerance
         */
        return (1 - GR) * (x_u - x_l) / x_opt;
    }
    
    double goldenSection(double x_l, double x_u, double x1=NAN, double x2=NAN) {
        /* 
         * Method of Golden Section - Recursive Approach
         */
        double d = (x_u - x_l) * GR;
        
        if (isnan(x1)) x1 = x_l + d;
        if (isnan(x2)) x2 = x_u - d;
        
        cout  << setw(10) << x_l << setw(10) << x2 << setw(10) << x1 << setw(10) << x_u << endl;
        
        if (func(x1) > func(x2)) {
            if (maxError(x_l, x_u, x1) < tolerance) {
                return x1;
            }
            return goldenSection(x2, x_u, NAN, x1);
        } 
        
        if (maxError(x_l, x_u, x2) < tolerance) {
            return x2;
        }
        return goldenSection(x_l, x1, x2, NAN);
    }
};



int main() {
    goldenSectionMethod gs;
    
    cout << gs.goldenSection(0, 4);
    return 0;
}