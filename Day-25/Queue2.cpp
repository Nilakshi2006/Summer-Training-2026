//Heap memory
#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int>*q=new queue<int>();    
    q->push(20);  
    q->push(30);
    q->push(40);

cout<<"Front element: "<<q->front()<<endl;   
cout<<"Last elements: "<<q->back()<<endl;    
cout<<"Queue Elements: ";
while(!q->empty()){
    cout<<q->front()<<" ";
    q->pop();
}
    return 0;
}