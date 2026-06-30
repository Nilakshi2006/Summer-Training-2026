// C++ program to create a class LibraryBook that stores the book ID, title, author name, and availability status. Implement member functions to issue a book, return a book, and display the updated book information.
 #include<iostream>
using namespace std;
class LibraryBook{
private:
    int ID;
    string title;
    string authorName;
    bool available;
public:
    void get(){
        cout<<"Enter the ID of book: "<<endl;
        cin>>ID;
        cin.ignore();
        cout<<"Enter the Title of book: "<<endl;
        getline(cin,title);
        cout<<"Enter the Author Name of book: "<<endl;
        getline(cin,authorName);
        available = true;
        cout<<"Book is available."<<endl;
    }
    void issue(){
        if(available){
            available = false;
            cout<<"Book issued."<<endl;
        } else {
            cout<<"Book not available."<<endl;
        }
    }
    void returnBook(){
        available = true;
        cout<<"Book returned."<<endl;
    }
    void display(){
        cout<<"ID: "<<ID<<endl;
        cout<<"Title: "<<title<<endl;
        cout<<"Author: "<<authorName<<endl;
        cout<<"Available: "<<(available?"Yes":"No")<<endl;
    }
};
int main(){
    LibraryBook obj1;
    obj1.get();
    obj1.display();
    obj1.issue();
    obj1.display();
    obj1.returnBook();
    obj1.display();
    return 0;
}