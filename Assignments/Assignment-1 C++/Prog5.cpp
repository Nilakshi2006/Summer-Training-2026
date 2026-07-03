// // C++ program to create a class Book that stores the book ID, title, author name, and price. Display all the details and determine whether the book is Affordable (Price < ₹500) or Expensive.
// #include<iostream>
// using namespace std;
// class Book{
//     public:
//     int ID;
//     string title;
//     string name;
//     int price;
// void show(){
//     cout<<"ID of book is: "<<ID<<endl;
//     cout<<"Title of book is: "<<title<<endl;
//     cout<<"Name of book is: "<<name<<endl;
//     cout<<"Price of book is: "<<price<<endl;
//     if(price<500){
//         cout<<"Book is Affordable";
//     }else{
//         cout<<"Book is expensive";
//     }

// }
// };
// int main(){
//     Book obj1;
//     cout<<"Enter the ID of book: "<<endl;
//     cin>>obj1.ID;

//      cout<<"Enter the Title of book: "<<endl;
//      cin.ignore();
//    getline(cin,obj1.title);
    
//    cout<<"Enter the Name of book: "<<endl;
//    getline(cin,obj1.name);

//        cout<<"Enter the Price of book: "<<endl;
//     cin>>obj1.price;

//     obj1.show();
//     return 0;
// }


// using another acces specifier
#include<iostream>
using namespace std;
class Book{
    private:
    int ID;
    string title;
    string name;
    int price;
    public:
    void get(){
 cout<<"Enter the ID of book: "<<endl;
    cin>>ID;

     cout<<"Enter the Title of book: "<<endl;
     cin.ignore();
   getline(cin,title);
    
   cout<<"Enter the Name of book: "<<endl;
   getline(cin,name);

       cout<<"Enter the Price of book: "<<endl;
    cin>>price;

    }
void show(){
    cout<<"ID of book is: "<<ID<<endl;
    cout<<"Title of book is: "<<title<<endl;
    cout<<"Name of book is: "<<name<<endl;
    cout<<"Price of book is: "<<price<<endl;
    if(price<500){
        cout<<"Book is Affordable";
    }else{
        cout<<"Book is expensive";
    }

}
};
int main(){
    Book obj1;
   obj1.get();
    obj1.show();
    return 0;
}