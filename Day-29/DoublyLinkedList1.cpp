//Doubly LinkedList
//It has 2 pointer prev and next

//Insertion in doubly linked list
#include<iostream>
using namespace std;
class node {
public:
int data;
node*next;
node*prev;
node()  
{
    data=0;
    next=NULL;
    prev=NULL;
}
node(int val) 
{
    data=val;
    next=NULL;
    prev=NULL;
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
// cout<<"\n2. Insert at End."<<endl ;
// cout<<"\n3. Insert at Position."<<endl;
cout<<"\n4. Exit."<<endl;
cout<<"Enter your choice: ";
cin>>ch;
switch(ch){
    case 1:
    in_beg();
    break;
    // case 2: 
    // at_end();
    // break;
    // case 3:
    // at_pos();
    // break;
    case 4:
choice2 ='n';
break;
default:
cout<<"Invalid choice.";
break;
}
}while(choice2=='y');
}
void display()
		{
			if(start==NULL)
			{
				cout<<"List is Empty!!"<<endl;
				return;
			}
			node *temp=start;
			cout<<"Doubly Linked List!!"<<endl;
			cout<<"NULL<->";
			while(temp!=NULL)
			{
				cout<<temp->data<<"<->";
				temp=temp->next;
			}
			cout<<"NULL"<<endl;
		}

void in_beg()
{
    int val;
    cout << "Enter the value: ";
    cin >> val;

    node *ptr = new node(val);

    if(start == NULL)
    {
        start = ptr;
        cout << "Node inserted!";
        return;              // IMPORTANT
    }

    ptr->next = start;
    start->prev = ptr;
    start = ptr;

    cout << "Node inserted!";
}

};
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
// cout<<"\n3.Delete."<<endl;
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
    // case 3:
    // l1.deletion();
    // break;
    case 4: 
    choice ='n';   
    break;
    default:
    cout<<"Invalid Choice!"<<endl;
    break;
}
    }
    while(choice=='y');
    return 0;
}