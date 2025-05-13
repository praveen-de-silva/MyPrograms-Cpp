#include <iostream>
#include <iomanip>  // For setprecision
#include <cmath>

using namespace std;

// Use long double for higher precision
long double func1(long double x2, long double x3, long double x4) {
    return (0 - (-50 * x2)) / 200;
}

long double func2(long double x1, long double x3, long double x4) {
    return (0 - (50 * x1 + 75 * x3)) / (-125);
}

long double func3(long double x1, long double x2, long double x4) {
    return (0 - (75 * x2 + 225 * x4)) / (-300);
}

long double func4(long double x1, long double x2, long double x3) {
    return (2000*9.86 - (-225 * x3)) / 225;
}

int main() {
    // Initialize with long double
    long double x1 = 65.5, x2 = 261.5, x3 = 392.5, x4 = 435.5;
    long double norm = 0, norm_prev = 1e6, error;
    long double tolerance = 1e-3;  // Tighter tolerance

    // Print with high precision
    cout << fixed << setprecision(6);

    for (int i = 1; i < 1000; i++) {
        norm = max(abs(x1), max(abs(x2), max(abs(x3), abs(x4))));
        error = abs(norm - norm_prev) / norm;

        cout << "=== Iteration " << i << " ==="
             << "\nx1  : " << x1
             << "\nx2  : " << x2
             << "\nx3  : " << x3
             << "\nx4  : " << x4
             << "\nError: " << error << "\n\n";

        if (error < tolerance) {
            cout << "Converged after " << i << " iterations." << endl;
            break;
        }

        // Update values (Gauss-Seidel: use new values immediately)
        x1 = func1(x2, x3, x4);
        x2 = func2(x1, x3, x4);  // x1 is already updated
        x3 = func3(x1, x2, x4);   // x1, x2 updated
        x4 = func4(x1, x2, x3);   // All others updated

        norm_prev = norm;
    }
    return 0;
}