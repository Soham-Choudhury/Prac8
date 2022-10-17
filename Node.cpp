#include "node.h"
#include<iostream>

using namespace std;
    Node::Node()
    {
        data=0;
        next=NULL;
    }
    
    int Node::getdata()
    {
        return data;
    }
    void Node::setdata(int data)
        {}

    Node Node::getnext()
    {
        return *next;
    }

