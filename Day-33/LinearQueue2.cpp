// Implementation of node using linked list
#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *front;
    node *rear;
    node *next;
    node()
    {
        data = 0;
        front = NULL;
        rear = NULL;
    }
    node(int val)
    {
        data = val;
        front = NULL;
        rear = NULL;
    }
};
class queue
{
    node *front = NULL;
    node *rear = NULL;

public:
    void enqueue()
    {
        int val;
        cout << "Enter the value:";
        cin >> val;
        node *ptr = new node(val);
        if (front == NULL)
        {
            front=rear=ptr;
        }
        else
        {
            rear->next=ptr;
            rear=ptr;
        }

        cout<<val<<"inserted to Queue."<<endl;
    }
    void dequeue()
    {
        if (front == NULL)
        {
            cout << "Queue Underflow" << endl;
            return;
        }
        cout << front->data << "Deleted from queue" << endl;
        node *temp = front;
        front = front->next;
        if (front == NULL)
        {
            front = rear = NULL;
            return;
        }
        delete temp;
    }
   void display()
    {
        if(front == NULL)
        {
            cout << "Queue is Empty..." << endl;
            return;
        }

        cout << "Queue elements:" << endl;

        node *temp = front;

        while(temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }

        cout << endl;
    }
    void peek()
    {
        if(front==NULL){
    cout<<"Stack is Empty"<<endl;
    return;
}
cout<<"Top Element:"<<front->data<<" "<<endl;
    }
};
int main()
{
    queue q1;
    int ch;
    char choice = 'y';
    do
    {
        cout << "Queue Operation." << endl;
        cout << "1.Enqueue" << endl;
        cout << "2.Dequeue" << endl;
        cout << "3.Display" << endl;
        cout << "4.Peek" << endl;
        cout << "5.Exit" << endl;
        cout << "Enter ur choice:";
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
            q1.display();
            break;
        case 4:
            q1.peek();
            break;
        case 5:
            choice = 'n';
            break;
        default:
            cout << "Invalid Choice";
            break;
        }
    } while (choice == 'y');
    return 0;
}