#include "Node.h"
using namespace std;
class LinkedList
{
    public:
        Node* head;
        void addFront(int newItem);
        void addEnd(int newItem);
        void addAtPosition(int position, int newItem);
        int search(int item);
        void deleteFront();
        void deleteEnd();
        void deletePosition(int position);
        int getItem(int position);
        void printItems();
        LinkedList();
        LinkedList(int arr[],int n);
        ~LinkedList();

};
