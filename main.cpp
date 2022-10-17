#include "LinkedList.h"
#include "node.h"
#include <bits/stdc++.h>

using namespace std;

int main() 
{
    string a;
    vector <string> str;
    while(1)
    {
        cin>>a;
        int asc=int(a[0]);
        if(asc>=65 && asc<=90)
        break;
        else
        {
            str.push_back(a);
        }
    }
    string func = a;
    int p1,p2;
    cin>>p1>>p2;
    
    int n=str.size();
    int c=0,arr[n];
    while(n--)
    {
        arr[c]=stoi(str[c]);
        c++;
    }       
    LinkedList(arr,n);
    LinkedList ll;
    if(func=="AF")
    {
        ll.addFront(p1);
    }
    if(func=="AE")
    {
        ll.addEnd(p1);
    }
    if(func=="AP")
    {
        ll.addAtPosition(p1,p2);
    }
    if(func=="S")
    {
        cout<<ll.search(p1);
    }
    if(func=="DF")
    {
        ll.deleteFront();
    }
    if(func=="DE")
    {
        ll.deleteEnd();
    }
    if(func=="DP")
    {
        ll.deletePosition(p1);
    }
    if(func=="GI")
    {
        cout<<ll.getItem(p1);
    }

return 0;
}