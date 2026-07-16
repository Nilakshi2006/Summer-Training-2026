// Insertion+deletion(Complete) in doubly linked list
#include<iostream>
using namespace std;

class node {
public:
    int data;
    node* next;
    node* prev;
    node() {
        data = 0;
        next = NULL;
        prev = NULL;
    }
    node(int val) {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

class linkedlist {
    node* start = NULL;
public:
    void insert() {
        int ch;
        char choice2 = 'y';
        do {
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
        cout << "Doubly Linked List!!" << endl;
        cout << "NULL<->";
        while (temp != NULL) {
            cout << temp->data << "<->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    void in_beg() {
        int val;
        cout << "Enter the value: ";
        cin >> val;
        node* ptr = new node(val);
        if (start == NULL) {
            start = ptr;
            cout << "Node inserted!";
            return;
        }
        ptr->next = start;
        start->prev = ptr;
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
            cout << "Node inserted!";
            return;
        }
        node* temp = start;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = ptr;
        ptr->prev = temp;
        cout << "Node inserted!";
    }

    void in_pos() {
        int val, pos, count = 1;
        cout << "Enter the value: ";
        cin >> val;
        cout << "Enter the position: ";
        cin >> pos;
        node* ptr = new node(val);
        if (start == NULL && pos != 1) {
            cout << "Invalid position!";
            return;
        }
        if (pos == 1) {
            ptr->next = start;
            if (start != NULL) {
                start->prev = ptr;
            }
            start = ptr;
            cout << "Node inserted!";
            return;
        }
        node* temp = start;
        while (temp != NULL && count < pos - 1) {
            temp = temp->next;
            count++;
        }
        if (temp == NULL) {
            cout << "Invalid position!";
            return;
        }
        ptr->next = temp->next;
        ptr->prev = temp;
        if (temp->next != NULL) {
            temp->next->prev = ptr;
        }
        temp->next = ptr;
        cout << "Node inserted!";
    }

    void del_beg() {
        if (start == NULL) {
            cout << "List is empty!";
            return;
        }
        node* temp = start;
        start = start->next;
        if (start != NULL) {
            start->prev = NULL;
        }
        delete temp;
        cout << "Node deleted!";
    }

    void del_end() {
        if (start == NULL) {
            cout << "List is empty!";
            return;
        }
        if (start->next == NULL) {
            delete start;
            start = NULL;
            cout << "Node deleted!";
            return;
        }
        node* temp = start;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->prev->next = NULL;
        delete temp;
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
            node* temp = start;
            start = start->next;
            if (start != NULL) {
                start->prev = NULL;
            }
            delete temp;
            cout << "Node deleted!";
            return;
        }
        node* temp = start;
        while (temp != NULL && count < pos) {
            temp = temp->next;
            count++;
        }
        if (temp == NULL) {
            cout << "Invalid position!";
            return;
        }
        if (temp->next != NULL) {
            temp->next->prev = temp->prev;
        }
        temp->prev->next = temp->next;
        delete temp;
        cout << "Node deleted!";
    }
};

int main() {
    linkedlist l1;
    int ch;
    char choice = 'y';
    system("cls");
    do {
        cout << "\n Linked List Project: " << endl;
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