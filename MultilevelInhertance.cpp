#include <iostream>
using namespace std;

class UOM {
    public: 
        void spell() {
            cout << "University of Moratuwa" << endl;
        }
};

class Person : public UOM {
    protected:
        string id;
        string name;
 
    public:
        Person(string aId, string aName) {
            id = aId;
            name = aName;
    }
};

class Student : public Person {
    private:
        int batchNo;

    public:
        Student(string aId, string aName, int aBatchNo) : Person(aId, aName) { // call the base class constructor
            batchNo = aBatchNo;
        }

        void dispDetails() {
            cout << "ID : " << id << "\nName : " << name << "\nBatchNo : " << batchNo;
        }
};

int main() {

    Student st1 = Student("230123K", "Praveen", 23);
    st1.dispDetails();

    return 0;
}