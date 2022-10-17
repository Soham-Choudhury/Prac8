class Node
{
    public:
        int data;
        Node* next;

        Node();

        int getdata();

        void setdata(int data);

        Node getnext();

        void setnext(Node ptr);
};