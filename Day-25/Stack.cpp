//Stack
//Stack is data structure that use LIFO(Last In First Out)principle
// #include<iostream>
// #include<stack>
#include<bits/stdc++.h>  //no other heaader file needed if u use this header file
using namespace std;
int main(){
    stack<int>st;   
    st.push(20);
     st.push(2);
      st.push(8);
       st.push(25);
       cout<<"Size of stack: "<<st.size()<<endl;   //size function tells how manu elements are present in stack
cout<<"Check stack is empty: "<<st.empty()<<endl;  //0 if not epty 1 if empty

//Traversing of stack
cout<<"Stack element: ";
       while(!st.empty()){
       cout<<st.top()<<" ";
st.pop();
       }
       return 0;
}