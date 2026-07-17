//Implementation of stack using linked list
#include<iostream>
using namespace std;
class node{
public:
int data;
node*next;
node(){
    data=0;
    next=NULL;
}
node(int val){
    data=val;
    next=NULL;
}
};
class stack{
node*top=NULL; //head
public:
void push(){
int val;
cout<<"Enter the value:";
cin>>val;
node*ptr=new node(val); //new node
if(ptr==NULL)  //When there is no memory in heap
{
    cout<<"Heap Overflow."<<endl;
    return;
}
if(top==NULL){
    top=ptr;
    cout<<"Node Pushed."<<endl;
    return;
}
ptr->next=top;
top=ptr;
cout<<"Node Pushed."<<endl;
}
void pop(){
if(top==NULL){
    cout<<"Stack is Empty"<<endl;
    return;
}
node*temp=top;
top=top->next;
delete temp;
cout<<"Node Poped."<<endl;
return;
}
void display(){
if(top==NULL){
    cout<<"Stack is Empty."<<endl;
    return ;
}
node*temp=top;
cout<<"Stack Elements."<<endl;
while(temp!=NULL){
cout<<temp->data<<" "<<endl;
temp=temp->next;
}

}
void peek(){
if(top==NULL){
    cout<<"Stack is Empty"<<endl;
    return;
}
cout<<"Top Element:"<<top->data<<" "<<endl;
}
};
int main(){
    stack s1;
    int ch;
    char choice='y';
    do{
cout<<"Stack Operation."<<endl;
cout<<"1.Push"<<endl;
cout<<"2.Pop"<<endl;
cout<<"3.Display"<<endl;
cout<<"4.Peek"<<endl;
cout<<"5.Exit"<<endl;
cout<<"Enter ur choice:";
cin>>ch;
switch(ch){
    case 1 :
    s1.push();
    break;
    case 2:
    s1.pop();
    break;
    case 3:
    s1.display();
    break;
    case 4:
    s1.peek();
    break;
    case 5:
    choice='n';
    break;
    default:
    cout<<"Invalid Choice";
    break;
}
    }
    while(choice=='y');
    return 0;
}