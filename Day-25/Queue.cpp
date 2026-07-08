//Queue
//it uses the FIFO(First In First Out )principle
//It has front and back
#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int>q;
    queue<int>*q=new queue<int>();
    q.push(20);  //add element to back
    q.push(30);
    q.push(40);

cout<<"Front element: "<<q.front()<<endl;   //q.front is used to see the first element
cout<<"Last elements: "<<q.back()<<endl;     //q.back is used to see the last elemnt
cout<<"Queue Elements: ";
while(!q.empty()){
    cout<<q.front()<<" ";
    q.pop();
}
    return 0;
}