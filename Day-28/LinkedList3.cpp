//Deletion in linked list(begin,end)........................
#include<iostream>
using namespace std;
class node {
public:
int data;
node*next;
node()  
{
    data=0;
    next=NULL;
}
node(int val) 
{
    data=val;
    next=NULL;
}
};
class linkedlist{
node*start=NULL;               
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

//Delete
void deletion(){
int ch;
char choice3='y';
do{
cout<<"\n1. Deletion at Begining."<<endl;
cout<<"\n2. Deletion at End."<<endl ;
cout<<"\n3. Deletion at Position."<<endl;
cout<<"\n4. Exit."<<endl;
cout<<"Enter your choice: ";
cin>>ch;
switch(ch){
    case 1:
    del_begin();
    break;
    case 2: 
    del_end();
    break;
    // case 3:
    // at_pos();
    // break;
    case 4:
choice3 ='n';
break;
default:
cout<<"Invalid choice.";
break;
}
}while(choice3=='y');
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
void at_begin(){
    int num;
    cout<<"Enter Number: ";
    cin>>num;
    //node making
node*ptr=new node(num);  //node name is ptr
if(start==NULL){
    start=ptr;
}
else{
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

//Deletion at beginning
void del_begin(){
    if(start==NULL){
cout<<"List is Empty";
    }
    if(start->next==NULL){
        delete start;
        start=NULL;
        return;
    }
        node*temp=start;
        start=start->next;
        delete temp;
        cout<<"Node Deleted from beginning.";
}

//deletion at end
void del_end(){
    if(start==NULL){
cout<<"List is empty.";
    }
    if(start->next==NULL){
        delete start;
        start==NULL;
return;
    }
    node*current=start;
    node*previous=NULL;
    while(current->next!=NULL){
        previous=current;
        current=current->next;
    }
    previous->next=NULL;
    delete current;
    cout<<"Node deleted from end.";
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
cout<<"\n3.Delete."<<endl;
cout<<"\n4.Exit."<<endl;
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
    l1.deletion();
    break;
    case 4: 
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