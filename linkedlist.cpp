#include <iostream>
using namespace std;

struct NodeType {
};

class LinkedList {
    public:
    void print(){

        NodeType * current;

        LinkedList();
        int getSize();
            NodeType * current;
            current = head;
            int size = 0;
            while (current != NULL){
                size ++;
                current = current -> next;
            }
        }
        
};

int main() {
    return 0;
}