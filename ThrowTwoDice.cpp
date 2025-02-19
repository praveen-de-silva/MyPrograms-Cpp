// Online C++ compiler to run C++ program online
#include <iostream>
#include <map>

using namespace std;

int main() {
    
    map<int, int> data;
    int temp;
    
    for (int i=1; i<=6; i++) {
        for (int j=1; j<=6; j++) {
            temp = i + j;
            
            if (data.find(temp) != data.end()) {
                data[temp] += 1;
            } else {
                data[temp] = 1;
            }
        }
    }
    
    for (const auto& pair : data) {
        cout << pair.first << " ---- " << pair.second << endl;
    }

    return 0;
}