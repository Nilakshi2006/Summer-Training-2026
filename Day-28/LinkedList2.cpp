//Insertion at begining,end,specific position complete...............

//Insertion at begining in Linked List
#include<iostream>
using namespace std;

//Making of node(datatype) using class
class node {
public:
int data;
node*next;
node()  //Constructer to intialize default values
{
    data=0;
    next=NULL;
}
node(int val) // constructor that automatically gives initial values to a new node when it is created.
{
    data=val;
    next=NULL;
}
};

//class Linked list store each node inside it
class linkedlist{
node*start=NULL;                //start pointer that will points to starting node in future
public:
void insert(){
int ch;
char choice2='y';
do{
cout<<"\n1. Insert at Begining."<<endl;
cout<<"\n2. Insert at End."<<endl ;
cout<<"\n3. Insert at Position."<<endl;
cout<<"\n4. Exit."<<endl;
cout<<"Enter your choice: ";
cin>>ch;
switch(ch){
    case 1:
    at_begin();
    break;
    case 2: 
    at_end();
    break;
    case 3:
    at_pos();
    break;
    case 4:
choice2 ='n';
break;
default:
cout<<"Invalid choice.";
break;
}
}while(choice2=='y');
}
void display(){
node*temp=start;
if(start==NULL){
    cout<<"List is empty!"<<endl;
    return ;
}
cout<<"List:"<<endl;
while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;  
}
}

//functions for operation....
//Insertion at beginning
void at_begin(){
    int num;
    cout<<"Enter Number: ";
    cin>>num;
    //node making
node*ptr=new node(num);  //node name is ptr
if(start==NULL){
    start=ptr;
}else{
    ptr->next=start;     //link the new node to start
    start=ptr;           //start points to ptr
cout<<"Node Inserted!"<<endl;
}
}

//Insertion at end
void at_end(){
int val;
cout<<"Enter Number: ";
cin>>val;
node*ptr=new node(val);
if(start==NULL){
    start=ptr;
}else{
node*temp=start;
while(temp->next!=NULL){
    temp=temp->next;

}
temp->next=ptr;
cout<<"Node Inserted at end.";
}
}

//Insertion at specific position
void at_pos(){
int val,pos;
cout<<"Enter value: ";
cin>>val;
cout<<"Enter Position where u want to insert: ";
cin>>pos;
node*ptr=new node(val);
node*temp=start;
if(pos==1) //if inserting at starting pos
{
ptr->next=start;
start=ptr;
cout<<"Node Inserted.";
return;
}
for(int i=1;i<pos-1 && temp!=NULL ;i++)
{
temp=temp->next;
}
if(temp==NULL){
    cout<<"Invalid Position.";
    return;
}
ptr->next=temp->next;
temp->next=ptr;
cout<<"Node Inserted.";
}
};

//Menu driven program
int main(){
    linkedlist l1;
    int ch;
    char choice='y';
    system("cls");  //for clear screen
    //For menu driven program use do-while or switch
    do{
cout<<"\n Linked List Project: "<<endl;
cout<<"\n1. Insert."<<endl;
cout<<"\n2.Display."<<endl;
cout<<"\n3.Exit."<<endl;
cout<<"Enter your choice: ";
cin>>ch;
switch(ch){
    case 1:
    l1.insert();
    break;
    case 2:
    l1.display();
    break;
    case 3: 
    choice ='n';    //while condition gets failed here!
    break;
    default:
    cout<<"Invalid Choice!"<<endl;
    break;
}
    }
    while(choice=='y');
    return 0;
}