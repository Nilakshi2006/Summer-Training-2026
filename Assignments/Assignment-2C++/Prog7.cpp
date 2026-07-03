// C++ program to Create a class “Mobile” with attributes: brand, price, color. Enter detail of five different mobile. (Using Array of object).
// Display total number of mobile having price greater than 5000.
// Display Brand, Price and color for all mobiles for price range 1000 to 10000
#include<iostream>
using namespace std;
class Mobile{
    public:
    string brand,color;
    int price;
    void set(){
cout<<"Enter the brand of mobile: "<<endl;
getline(cin,brand);
cout<<"Enter the Price of mobile: "<<endl;
cin>>price;
cout<<"Enter the Color of mobile: "<<endl;
cin>>color;
cin.ignore();
    }
    void display(){
        cout<<"Brand of mobile is: "<<brand<<endl;
        cout<<"Price of mobile is: "<<price<<endl;
        cout<<"Color of mobile is: "<<color<<endl;
    }
};
int main(){
    Mobile m[5];
    int i;
    for(i=0;i<5;i++){
        cout<<"Enter the details of mobile: "<<i+1<<endl;
        m[i].set();
    }int count = 0;
    cout << "\nMobiles with price > 5000:\n";
    for (int i = 0; i < 5; i++) {
        if (m[i].price > 5000) {
            count++;
            m[i].display();
        }
    }
    cout << "Total mobiles with price > 5000: " << count << endl;

    cout << "\nMobiles in price range 1000-10000:\n";
    for (int i = 0; i < 5; i++) {
        if (m[i].price >= 1000 && m[i].price <= 10000) {
            m[i].display();
        }
    }
    return 0;
}