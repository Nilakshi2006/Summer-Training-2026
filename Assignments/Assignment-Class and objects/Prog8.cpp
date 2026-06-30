// C++ program to create a class Product that stores the product ID, product name, quantity, and price. Calculate the total cost of the product and display all the details.
#include<iostream>
using namespace std;
class Product{
    private:
    int ID;
    string name;
    int quantity;
    int price;
    public:
    void get(){

        cout<<"Enter the ID of product: "<<endl;
        cin>>ID;
         cout<<"Enter the Name of product: "<<endl;
        cin>>name;
         cout<<"Enter the Quantity of product: "<<endl;
        cin>>quantity;
         cout<<"Enter the Price of product: "<<endl;
        cin>>price;
    }
    void show(){
        cout<<"Cost of the product is: "<<(price*quantity)<<endl;
    }
};
int main(){
    Product obj1;
    obj1.get();
    obj1.show();
    return 0;
}