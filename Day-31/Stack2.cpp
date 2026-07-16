#include <iostream>
#define size 5 // size of arr
using namespace std;
class stack
{
    int top;
    int arr[size];

public:
    stack()
    {
        top = -1;
    }
    void push(){
        int val;
        cout<<"Enter the value:";
        cin>>val;
        if(top==size-1){
            cout<<"Stack Overflow!! Can't Insert.."<<endl;
            return;
        }
        top++;
        arr[top]=val;
        cout<<"Value Inserted.."<<endl;
    }
    void pop(){
        if(top==-1){
            cout<<"Stack Underflow!!..Can'tnPop/Delete.."<<endl;
            return;
        }
        cout<<arr[top]<<" Delted from stack.."<<endl;
        top--;
    }
    void display(){
        if(top==-1){
            cout<<"Stack is Empty.."<<endl;
            return;
        }
        cout<<"Stack Elements:"<<endl;
        for(int i=top;i>=0;i--){
cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    void peek(){
        if(top==-1){
            cout<<"Stack is empty.."<<endl;
            return;
        }
        cout<<arr[top]<<" is the top element.."<<endl;
    }
};
int main()
{
    stack s1;
    char choice = 'y';
    int ch;
    do
    {
        cout << "****Stack Operations****" << endl;
        cout << "1.Push" << endl;
        cout << "2.Pop" << endl;
        cout << "3.Peek" << endl;
        cout << "4.Display" << endl;
        cout << "5.Exit" << endl;
        cout << "Enter Your Choice:";
        cin >> ch;
        switch (ch)
        {
        case 1:
            s1.push();
            break;
        case 2:
            s1.pop();
            break;
        case 3:
            s1.peek();
            break;
        case 4:
            s1.display();
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