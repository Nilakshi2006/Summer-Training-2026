#include<iostream>
#define size 5
using namespace std;

class queue
{
    int arr[size];
    int rear;

public:

    queue()
    {
        rear = -1;
    }

    void enqueue()
    {
        int val;
        cout<<"Enter value: ";
        cin>>val;

        if(rear == size-1)
        {
            cout<<"Queue Overflow..."<<endl;
            return;
        }

        int i;

        // Shift larger elements to right
        for(i=rear; i>=0 && arr[i]>val; i--)
        {
            arr[i+1]=arr[i];
        }

        arr[i+1]=val;
        rear++;

        cout<<val<<" inserted into Priority Queue."<<endl;
    }

    void dequeue()
    {
        if(rear==-1)
        {
            cout<<"Queue Underflow..."<<endl;
            return;
        }

        cout<<arr[0]<<" deleted from Priority Queue."<<endl;

        for(int i=0;i<rear;i++)
        {
            arr[i]=arr[i+1];
        }

        rear--;
    }

    void display()
    {
        if(rear==-1)
        {
            cout<<"Queue is Empty..."<<endl;
            return;
        }

        cout<<"Priority Queue Elements:"<<endl;

        for(int i=0;i<=rear;i++)
        {
            cout<<arr[i]<<" ";
        }

        cout<<endl;
    }
};

int main()
{
    queue q1;

    int ch;
    char choice='y';

    do
    {
        cout<<"\nPriority Queue Operations"<<endl;
        cout<<"1. Enqueue"<<endl;
        cout<<"2. Dequeue"<<endl;
        cout<<"3. Display"<<endl;
        cout<<"4. Exit"<<endl;

        cout<<"Enter choice: ";
        cin>>ch;

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
                choice='n';
                break;

            default:
                cout<<"Invalid Choice"<<endl;
        }

    }while(choice=='y');

    return 0;
}