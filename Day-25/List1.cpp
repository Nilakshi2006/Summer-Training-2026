//List
//It is sequential container that internally work as doubly linked list and has 2 pointers next and prev
//forwand list is used to work on singly linked list
//header file-#include<list>
#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int>ls;      //declaration of list
    ls.push_back(2);  //add elements in last    //2
    ls.push_front(3); //add element in front    //3 2
    ls.push_back(4);                            //3 2 4
    ls.push_front(7);                           //7 3 2 4
    ls.pop_back();   //pop element from back    //7 3 2

    for(int ele :ls){
        cout<<ele<<" ";
    }
}