//Queue
//Queue is data structure that uses FIFO(First In First Out) principle
//Implementation of queue using arr
#include <iostream>
#define size 5 
using namespace std;
class queue
{
    int front;
    int rear;
    int arr[size];

public:
    queue()
    {
        front = -1;
        rear=-1;
    }
    void enqueue(){
        int val;
        cout<<"Enter the value:";
        cin>>val;
    if(front==-1){
     front=0;
    }
    if(rear==size-1){
        cout<<"Queue Overflow"<<endl;
        return;
    }
    rear++;
    arr[rear]=val;
    cout<<"Value Enqueued"<<endl;
    }
    void dequeue(){
if(front==-1 || front>rear){
    cout<<"Queue Underflow"<<endl;
    return;
}

cout<<"Value deleted"<<endl;
front++;
    }
    void peek(){

    }
    void display(){
if(front==-1){
    cout<<"Queue Eempty"<<endl;
    return;
}
cout<<"Queue Elements:";
for(int i=front;i<=rear;i++){
    cout<<arr[i]<<" "<<endl;
}
    }
};

int main()
{
    queue q1;
    char choice = 'y';
    int ch;
    do
    {
        cout << "****Queue Operations****" << endl;
        cout << "1.Enqueue" << endl;
        cout << "2.Dequeue" << endl;
        cout << "3.Peek" << endl;
        cout << "4.Display" << endl;
        cout << "5.Exit" << endl;
        cout << "Enter Your Choice:";
        cin >> ch;
        switch (ch)
        {
        case 1:
            q1.enqueue();
            break;
        case 2:
            q1.dequeue();
            break;
        case 3:
            q1.peek();
            break;
        case 4:
            q1.display();
            break;
            case 5:
            choice='n';
            break;
            default:
            cout<<"Invalid Choice!!";
        }
    } while (choice == 'y');
    return 0;
}