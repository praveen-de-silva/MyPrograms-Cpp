#include <iostream>

using namespace std;

/*
 * SUBA ALUTH AWURUDDAK WEWA!!! 
 */

struct Node {
    int value;
    Node* next;
    
    Node (int val) {
        value = val;
        next = nullptr;
    }
};

int main() {
    Node* n1 = new Node(12);
    Node* n2 = new Node(23);
    Node* n3 = new Node(34);
    
    n1->next = n2;
    n2->next = n3;
    
    Node* crnt = n1;
    
    while (crnt!=nullptr) {
        cout << crnt->value << " ";
        crnt = crnt->next;
    }
    
    

    return 0;
}