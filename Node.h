#ifndef NODE
#define NODE

class Node{
    public:
    int data;
    Node *next=nullptr;
    Node();
    int getdata();
    void setdata(int data);
    Node* getnextNode();
    void setnextNode(Node *nextnode);
};

#endif