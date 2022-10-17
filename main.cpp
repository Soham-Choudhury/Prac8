///#include "Node.h"
//#include "LinkedList.h"
#include <iostream>
#include <string>
#include <vector>
#include <array>
using namespace std;
void printItems(array<int,100> array){
    for (int i=0;i<100;i++){
        cout<<i<<": "<<array[i]<<endl;
    };
}

void printItems(vector<string> list){
    int size=list.size();
    for (int i=0;i<size;i++){
        cout<<i<<": "<<list.at(i)<<endl;
    };
}


int main (){
    vector<string> list; //vector to hold inputs
    array<int,100> numbers; //array to hold data
    numbers.fill(0);
    string input=""; //variable to hold input as string
    string target=" "; //variable holding the target to aim for the space to differentiate between different ints
    string hold=""; //variable and temp hold space
    int targetfound;
    getline (cin >> ws,input); //taking input including spaces
    int sizeofin=input.size();
    for (int z=0; z<sizeofin;z++){ //taking input line and putting integers in vector
        targetfound=input.find(target); // finding location of first space
        if (targetfound==-1){
            hold=input.substr(0,input.size());
            list.push_back(hold);
            input.erase(0,input.size());
            break;
        }
        else if (targetfound!= -1){
            hold=input.substr(0,targetfound); // taking out first int out of string input
            list.push_back(hold); //converting input number from string to integer and holding in vector values
            input.erase(0,targetfound+1); //erasing first int and space in input string
        }
    };
    //list={"5","2","7","10","AP","3","9"};
    //list={"3","4","2","1","DP","3","0"};
    //list={"45","20","2","10","GI","3","0"};
    string functioncode, temp;
    hold="";
    int size=list.size();
    
    for (int i=0;i<size;i++){ //cycling through function codes to find which one is used
        if (list.at(i)=="AF" || list.at(i)=="AE" || list.at(i)=="AP" || list.at(i)=="S" || list.at(i)=="DF" || list.at(i)=="DE" || list.at(i)=="DP" || list.at(i)=="GI"){
            functioncode=list.at(i);
            list.erase(list.begin()+i);
            break;
        }
    }
    int param1=0;
    int param2=0;
    size=list.size();
    for (int i=0;i<size;i++){
        if (i<size-2){
            numbers[i]=(stoi(list.at(i)));
        }
        else if (i==size-2){
            param1=(stoi(list.at(i)));

        }
        else if (i==size-1){
            param2=(stoi(list.at(i)));
        }
    }
    
    printItems(numbers);
    printItems(list);
    cout<<"Functioncode: "<<functioncode<<endl;
    cout<<"Param1: "<<param1<<endl;
    cout<<"Param2: "<<param2<<endl;

};