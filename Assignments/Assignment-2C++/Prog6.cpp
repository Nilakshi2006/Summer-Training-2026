// C++ program to Create a class “Mobile” with attributes: brand, price, color, width, height. Use constructor to set default values of these attributes. Write function to display details of all attributes
#include<iostream>
using namespace std;
class Mobile{
    public:
    string brand,color;
    int price,width,height;
    Mobile(){
        brand="Samsung";
        price=18000;
        color="Black";
        width=20;
        height=20;
    }
    void display(){
        cout<<"The brand of Mobile is: "<<brand<<endl;
        cout<<"The price of Mobile is: "<<price<<endl;
        cout<<"The color of Mobile is: "<<color<<endl;
        cout<<"The width of Mobile is: "<<width<<endl;
        cout<<"The height of Mobile is: "<<height<<endl;
    }
};
int main(){
    Mobile m;
    m.display();
    return 0;
}