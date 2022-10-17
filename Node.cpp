#include "Node.h"

//Node::Node(){
//    data=0;
//    Node *next=nullptr;
//};
Node* Node::getdata(){
    return data;
};
void Node::setdata(int data){
    data=data;
};

Node* Node::getnextNode(){
    return next;
};

void Node::setnextNode(Node *nextnode){
    next=nextnode;
};
