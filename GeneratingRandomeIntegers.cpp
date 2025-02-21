#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()

using namespace std;

// Function to generate and display an array of random integers
void generateArray(int arr[], int size, int maxVal, int minVal = 1) {
    for (int i = 0; i < size; i++) {
        arr[i] = minVal + rand() % (maxVal - minVal + 1); // Generate random number
    }
}

// Function to display the array
void displayArray(int arr[], int size) {
    cout << "[";
    for (size_t i = 0; i < size; i++) {
        cout << arr[i] << (i==size-1 ? "]" : ", ");
    }
    cout << endl;
}

int main() {
    srand(time(0)); // Seed the random number generator with the current time

    const int size1 = 100, size2 = 200, size3 = 300, size4 = 400;
    int array1[size1], array2[size2], array3[size3], array4[size4];

    // Generate random numbers for each array
    generateArray(array1, size1, size1);
    generateArray(array2, size2, size2);
    generateArray(array3, size3, size3);
    generateArray(array4, size4, size4);

    // Display arrays
    cout << "Array 1 (100 elements):" << endl;
    displayArray(array1, size1);

    cout << "\nArray 2 (200 elements):" << endl;
    displayArray(array2, size2);

    cout << "\nArray 3 (300 elements):" << endl;
    displayArray(array3, size3);

    cout << "\nArray 4 (400 elements):" << endl;
    displayArray(array4, size4);

    return 0;
}
