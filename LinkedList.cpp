#include "LinkedList.h"
#include<limits>
#include<iostream>

using namespace std;

#define NULL __null

Node np;

LinkedList ::LinkedList()
{
    head = NULL;
}
LinkedList ::LinkedList(int arr[], int n)
{
    Node *head = NULL;
    for (int i = 0; i < n; i++)
    {
        Node *temp = new Node;
        Node *ptr;
        temp->data = arr[i];
        temp->next = NULL;

        if (head == NULL)
            head = temp;
        else
        {
            ptr = head;
            while (ptr->next != NULL)
                ptr = ptr->next;
            ptr->next = temp;
        }
    }
}

void LinkedList::addFront(int newItem)
{
    Node *newNode = new Node;
    newNode->data = newItem;
    newNode->next = head;
    head = newNode;
}

void LinkedList::addEnd(int newItem)
{
    if (head == NULL)
    {
        return;
    }
    Node *newNode = new Node;
    newNode->data = newItem;
    newNode->next = NULL;
    while (head->next != NULL)
        head = head->next;

    head->next = newNode;
}

void LinkedList::addAtPosition(int position, int newItem) 
{
    Node *newNode = new Node();
    newNode->data = newItem;
    newNode->next = NULL;

    if (position < 1)
    {
        return;
    }
    else if (position == 1)
    {
        newNode->next = head;
        head = newNode;
    }
    else
    {

        Node *temp = head;
        for (int i = 1; i < position - 1; i++)
        {
            if (temp != NULL)
            {
                temp = temp->next;
            }
        }

        if (temp != NULL)
        {
            newNode->next = temp->next;
            temp->next = newNode;
        }
        else
        {
            return;
        }
    }
}

int LinkedList::search(int item)
{
	int index = 0;              
	Node * temp = head;
	while(temp!=NULL){
		if(temp->data == item){ 
            cout<< index +1;        
			return index+1;               
		}
		temp = temp->next;
		index++;
	}   
    cout<<0;
	return 0; 
}

void LinkedList::deleteFront()
{
    if(head==NULL){
      return;
   }
   Node*temp=head;
   head= head->next;
   delete temp;
   return;
}

int LinkedList::getItem(int position)
{
	int index = 0;              
	Node * temp = head;
	while(temp!=NULL){
		if(index+1==position){ 
            cout<< temp->data<<" ";        
			return temp->data;               
		}
		temp = temp->next;
		index++;
	}   
    if(temp==NULL && position>index)
    {
        cout<<"std::numeric_limits <int>::max()"<<" ";
        return numeric_limits<int>::max();
    }
    cout<<0;
	return 0; 
}

void LinkedList::deleteEnd(){
   Node*prev= NULL;
   Node*temp= head;
   while(temp->next!=NULL){
      prev= temp;
      temp=temp->next;
   }
   delete temp;
   prev->next= NULL;
   return;
}

void LinkedList::deletePosition(int position) 
{
    if (head == NULL) {
      return;
   }
   struct Node* temp = head;
   if (position == 1) {
      head = temp->next;
      delete(temp);
      return;
   }
   for (int i = 2; temp != NULL && i < position - 1; i++) {
      temp = temp->next;
   }
   if (temp == NULL || temp->next == NULL) {
      return;
   }
   struct Node *next = temp->next->next;
   free(temp->next);
   temp->next = next;
}

void LinkedList::printItems()
{
    while (head != NULL)
    {
        cout << head->data<<" ";
        head = head->next;
    }
    cout << endl;
}

LinkedList ::~LinkedList()
{}
