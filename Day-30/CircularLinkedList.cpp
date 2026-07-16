//Circular Linked List
// A circular linked list is a type of linked list where the last node points back to the first node, forming a circle. This means that there is no "end" to the list, and you can traverse the list indefinitely.
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
class CircularLinkedList{
node*start=NULL;
public:
void insert(){
int ch;
char choice2='y';
do{
            cout << "\n1. Insert at Begining." << endl;
            cout << "\n2. Insert at End." << endl;
            cout << "\n3. Insert at Position." << endl;
            cout << "\n4. Exit." << endl;
            cout << "Enter your choice: ";
            cin >> ch;
            switch (ch) {
            case 1:
                in_beg();
                break;
            case 2:
                in_end();
                break;
            case 3:
                in_pos();
                break;
            case 4:
                choice2 = 'n';
                break;
            default:
                cout << "Invalid choice.";
                break;
            }
        } while (choice2 == 'y');
    }

    void deletion() {
        int ch;
        cout << "\n1. Delete at Begining." << endl;
        cout << "\n2. Delete at End." << endl;
        cout << "\n3. Delete at Position." << endl;
        cout << "Enter your choice: ";
        cin >> ch;
        switch (ch) {
        case 1:
            del_beg();
            break;
        case 2:
            del_end();
            break;
        case 3:
            del_pos();
            break;
        default:
            cout << "Invalid choice.";
            break;
        }
    }
       void display() {
    if (start == NULL) {
        cout << "List is Empty!!" << endl;
        return;
    }
    node* temp = start;
    cout << "Circular Linked List!!" << endl;
    do {
        cout << temp->data << " -> ";
        temp = temp->next;
    } while (temp != start);
    cout << "(back to " << start->data << ")" << endl;
}
        void in_beg() {
        int val;
        cout << "Enter the value: ";
        cin >> val;
        node* ptr = new node(val);
        if (start == NULL) {
            start = ptr;
            ptr->next = start;
            cout << "Node inserted!";
            return;
        }
        node* temp = start;
        while (temp->next != start) {
            temp = temp->next;
        }
        temp->next = ptr;
        ptr->next = start;
        start = ptr;
        cout << "Node inserted!";
    }
    void in_end() {
        int val;
        cout << "Enter the value: ";
        cin >> val;
        node* ptr = new node(val);
        if (start == NULL) {
            start = ptr;
            ptr->next = start;
            cout << "Node inserted!";
            return;
        }
        node* temp = start;
        while (temp->next != start) {
            temp = temp->next;
        }
        temp->next = ptr;
        ptr->next = start;
        cout << "Node inserted!";
    }
        void in_pos() {
    int val, pos;
    cout << "Enter value: ";
    cin >> val;
    cout << "Enter Position where u want to insert: ";
    cin >> pos;
    node* ptr = new node(val);
    if (start == NULL && pos != 1) {
        cout << "Invalid Position.";
        return;
    }
    if (pos == 1) {
        ptr->next = start;
        start = ptr;
        cout << "Node Inserted.";
        return;
    }
    node* temp = start;
    for (int i = 1; i < pos - 1 && temp->next != start; i++) {
        temp = temp->next;
    }
    if (temp->next == start && pos != 2) {
        cout << "Invalid Position.";
        return;
    }
    ptr->next = temp->next;
    temp->next = ptr;
    cout << "Node Inserted.";
}

    void del_beg() {
        if (start == NULL) {
            cout << "List is empty!";
            return;
        }
        if (start->next == start) {
            delete start;
            start = NULL;
            cout << "Node deleted!";
            return;
        }
        node* temp = start;
        while (temp->next != start) {
            temp = temp->next;
        }
        temp->next = start->next;
        delete start;
        start = temp->next;
        cout << "Node deleted!";
    }

    void del_end() {
        if (start == NULL) {
            cout << "List is empty!";
            return;
        }
        if (start->next == start) {
            delete start;
            start = NULL;
            cout << "Node deleted!";
            return;
        }
        node* temp = start;
        while (temp->next->next != start) {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = start;
        cout << "Node deleted!";
    }

    void del_pos() {
        int pos, count = 1;
        cout << "Enter the position: ";
        cin >> pos;
        if (start == NULL) {
            cout << "List is empty!";
            return;
        }
        if (pos == 1) {
            if (start->next == start) {
                delete start;
                start = NULL;
                cout << "Node deleted!";
                return;
            }
            node* temp = start;
            while (temp->next != start) {
                temp = temp->next;
            }
            temp->next = start->next;
            delete start;
            start = temp->next;
            cout << "Node deleted!";
            return;
        }
        node* temp = start;
        while (temp->next != start && count < pos - 1) {
            temp = temp->next;
            count++;
        }
        if (temp->next == start && count < pos - 1) {
            cout << "Invalid position!";
            return;
        }
        node* ptr = temp->next;
        temp->next = ptr->next;
        delete ptr;
        cout << "Node deleted!";
    }


};

int main() {
    CircularLinkedList l1;
    int ch;
    char choice = 'y';
    system("cls");
    do {
        cout << "\n Circular Linked List Project: " << endl;
        cout << "\n1. Insert." << endl;
        cout << "\n2. Display." << endl;
        cout << "\n3. Delete." << endl;
        cout << "\n4. Exit." << endl;
        cout << "Enter your choice: ";
        cin >> ch;
        switch (ch) {
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
            choice = 'n';
            break;
        default:
            cout << "Invalid Choice!" << endl;
            break;
        }
    } while (choice == 'y');
    return 0;
}

