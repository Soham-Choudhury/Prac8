#ifndef LINKEDLIST
#define LINKEDLIST
#include "Node.h"


class LinkedList : public Node{
    Node *head;
    public:
    void addFront(int newItem);
    void addEnd(int newItem);
    void addAtPosition(int position, int newItem);
    int search(int item);
    void deleteFront();
    void deleteEnd();
    void deletePosition(int position);
    int getItem(int position);
    void printItems();
    int size();

};


#endif