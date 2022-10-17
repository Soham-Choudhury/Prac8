#include "LinkedList.h"
#include <iostream>
#include <limits>
using namespace std;

int LinkedList::size(){
    Node* temp=new Node();
    temp=head;
    int size=1;
    while (temp.next!=NULL){
        size++;
        temp=temp.next;
    }
    return size+1;
};

void LinkedList::addFront(int newItem){
    Node* newNode= new Node();
    newNode.data->newItem;
    newNode.next->head;
    head= newNode;
};

void LinkedList::addEnd(int newItem){
    Node* newNode= new Node();
    newNode.data-> newItem;
    newNode.next-> NULL;
    Node temp = head; //making temp node that starts at head
    while (temp.next!=NULL){
        temp=temp.next;
    }
    temp.next=newNode;
};

int LinkedList::search(int item){
    Node* temp= new Node;
    temp = head; //making temp node that starts at head
    int position=1;
    while (temp.next!=NULL && temp.data!=item){
        position++;
        temp=temp.next;
    }
    if (temp.data==item){
        return position
    }
    else if {
        return 0;
    }
};

void LinkedList::addAtPosition(int position, int newItem){
    Node* newNode= new Node();
    LinkedList listsize;
    Node* temp = head;
    Node* newtemp;
    int size=listsize.size();
    newNode.data= newItem;
    if (size<position){
        addEnd(newItem);
    }
    else if (position<1){
        addFront(newItem);
    }
    else {
        for (int i=1;i<position;i++){
            if (i==position-1){
                newtemp=temp.next;
                temp.next=newNode;
                newNode.next=newtemp;
            }
            temp=temp.next;
        }
    }
    
};

void LinkedList::deleteFront(){
    Node* temp = head;
    head=head.next;
};

void LinkedList::deleteEnd(){
    Node* temp = head;
    int position=1;
    while (temp.next!=NULL){
        temp=temp.next;
        position ++;
    }
    temp=head;
    for (int i=1; i<position; i++){
        if (i==position-1){
            temp.next==NULL;
        }
        temp=temp.next;
    }
};

void deletePosition(int position){
    Node* temp = head;
    Node* newtemp;
    int tempposition=1;

    for (int i=1; i=position; i++){ //(eg. if node 3 is to be deleted) take address of node 4 from the node 3 and store in another variable
        if (i==position){
            newtemp=temp.next;
        }
        temp=temp.next;
    }
    for (int i=1; i<position; i++){ //(eg. if node 3 is to be deleted) iterate down to node 2 from head and add address of node 4 as next node
        if (i==position-1){
            temp.next=newtemp;
        }
        temp=temp.next;
    }

};

int LinkedList::getItem(int position){
    Node* temp=head;
    LinkedList listsize;
    int size=listsize.size();
    for(int i=1;i=position;i++){
        if (i==position){
            cout<<temp.data<<" "<<endl;
            return temp.data;
        }
        if (position>size){
            cout<<"std::numeric_limits < int >::max() "<<endl;
            return std::numeric_limits < int >::max();
        }
        temp=temp.next;
    }
};

void LinkedList::printItems(){
    Node* temp=head;
    while (temp.next!=NULL){
        cout<<temp.data<<endl;
        temp=temp.next;
    }
    temp=temp.next;
    cout<<temp.data<<endl;
};