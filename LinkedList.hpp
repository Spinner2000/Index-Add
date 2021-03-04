#include "Node.hpp"

class LinkedList
{
    private:
        Node* head;
        Node* tail;
        int count;

    public:
        LinkedList();
        void display();
        void addEnd(int value);
        void addFront(int value);
        int removeEnd();
        int removeFront();
        int removeAtIndex(int index);
        int addAtIndex( int value);
};