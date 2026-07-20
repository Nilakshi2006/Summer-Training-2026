//Circular Queue implementation using array
#include<iostream>
using namespace std;

// Node class
class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class queue
{
    Node *front, *rear;

public:

    queue()
    {
        front = NULL;
        rear = NULL;
    }

    void enqueue()
    {
        int val;
        cout << "Enter value: ";
        cin >> val;

        Node *newNode = new Node(val);

        // Queue is empty
        if(front == NULL)
        {
            front = rear = newNode;
        }
        else
        {
            rear->next = newNode;
            rear = newNode;
        }

        cout << val << " inserted to Queue." << endl;
    }

    void dequeue()
    {
        if(front == NULL)
        {
            cout << "Queue Underflow..." << endl;
            return;
        }

        Node *temp = front;

        cout << front->data << " deleted from Queue..." << endl;

        front = front->next;

        // If queue becomes empty
        if(front == NULL)
        {
            rear = NULL;
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

        Node *temp = front;

        while(temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }

        cout << endl;
    }
};

int main()
{
    queue q1;
    int ch;
    char choice = 'y';

    do
    {
        cout << "\nQueue Operation." << endl;
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Display" << endl;
        cout << "4. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> ch;

        switch(ch)
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
                choice = 'n';
                break;

            default:
                cout << "Invalid Choice..." << endl;
        }

    } while(choice == 'y');

    return 0;
}