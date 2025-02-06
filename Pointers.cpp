#include <iostream>  // Required for cout
using namespace std;

class Boarding {
    public:
        int elecBill;
        int waterBill;

        Boarding(int aNoMembers, int aFee) {
            noMembers = aNoMembers;
            fee = aFee;
    }


};

class Helper {  
    public:
    double perPersonFee(Boarding *brd) {
        return double(brd -> fee) / (brd -> noMembers);
    } 
};


    int main() {
        Boarding brd1(4, 20000);
        Helper helper;

        cout << helper.perPersonFee(&brd1) << endl;
        
        return 0;
    }
