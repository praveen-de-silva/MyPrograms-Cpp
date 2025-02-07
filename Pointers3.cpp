#include <iostream>
#include <cstddef>

using namespace std;

typedef struct
{
    int squareFt;
    int numBedrooms;
    int numBathrooms;
} House;


int main() {
    House house = {900, 2, 1};

    cout << house.numBathrooms;
}