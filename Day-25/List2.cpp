//Forward list
//element can be added only from last
#include<iostream>
#include<list>
#include<forward_list>//header file for forward list
using namespace std;
int main(){
    list<int>ls;      //declaration of list
    forward_list<int>fl;
    fl.push_front(20);    //20
     fl.push_front(40);   //40 20
      fl.push_front(50);  //50 40 20
      fl.pop_front();     //40 20
      cout<<"Forward list: ";
       for(int ele :fl){
        cout<<ele<<" ";
    }
}