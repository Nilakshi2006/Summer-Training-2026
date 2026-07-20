#include <iostream>
#define size 5
using namespace std;

class deque
{
    int front, rear;
    int arr[size];

public:
    deque()
    {
        front = -1;
        rear = -1;
    }
    void insertRear()
    {
        int val;
        cout << "Enter the value to insert:";
        cin >> val;
        if (rear == size - 1)
        {
            cout << "Queue Overflow" << endl;
            return;
        }
        if (front == -1)
        {
            front = 0;
        }
        rear++;
        arr[rear] = val;
        cout << val << " Inserted at Rear" << endl;
    }

    void insertFront()
    {
        int val;
        cout << "Enter the value to insert:";
        cin >> val;
        if (front == 0)
        {
            cout << "Queue Overflow" << endl;
            return;
        }
        if(front=-1)//when front is -1 then rear is also -1
        {
            rear=0;
        }
        front--;
        cout <<arr[front]<<"Inserted at Front"<<endl;
    }

    void deleteFront()
    {
        if (front == -1)
        {
            cout << "Queue Underflow." << endl;
            return;
        }
        if (front == rear)
        {
            front = rear = -1;
        }
        cout << arr[front] << " Deleted from Front" << endl;
        front++;
    }

    void deleteRear(){
        
    }
};
int main()
{
    deque db1;
    int ch;
    cout << "\nDouble Ended Queue Operations:" << endl;
    cout << "1.Input Restricted Queue." << endl;
    cout << "2.Output Restricted Queue." << endl;
    cout << "Enter ur choice:";
    cin >> ch;
    if (ch == 1)
    {
        int ch1;
        char choice = 'y';
        do
        {
            cout << "\n1.Insert from Rear." << endl;
            cout << "2.Delete from Rear." << endl;
            cout << "3.Delete from Front" << endl;
            cout << "4.Exit" << endl;
            cout << "Enter ur choice:";
            cin >> ch1;
            switch (ch1)
            {
            case 1:
                db1.insertRear();
                break;
            case 2:
                db1.deleteRear();
                break;
            case 3:
                db1.deleteFront();
                break;
            case 4:
                choice = 'n';
                break;
            default:
                cout << "Invalid Choice." << endl;
                break;
            }
        } while (choice == 'y');
    }
    else if (ch == 2)
    {
        int ch1;
        char choice = 'y';
        do
        {
            cout << "\n1.Insert from Rear." << endl;
            cout << "2.Insert from Front." << endl;
            cout << "3.Delete from Front" << endl;
            cout << "4.Exit" << endl;
            cout << "Enter ur choice:";
            cin >> ch1;
            switch (ch1)
            {
            case 1:
                db1.insertRear();
                break;
            case 2:
                db1.insertFront();
                break;
            case 3:
                db1.deleteFront();
                break;
            case 4:
                choice = 'n';
                break;
            default:
                cout << "Invalid Choice." << endl;
                break;
            }
        } while (choice == 'y');
    }
    else
    {
        cout << "Invalid Choice." << endl;
    }
    return 0;
}