// Write a program as per following details
// Create one base class HOTEL with following data members Hotel_name,
// Hotel_type i.e(Three star,five star) City
// Hotel_rate i.e(2000,3000,5000)
// Create one base class FLIGHT with following data members Flight_no
// Source city Destination city Seat no
// Create one sub class PASSENGER derived from HOTEL and FLIGHT with following
// data members Name, Age, city
// Write appropriate member functions in each class and display all information in main
#include<iostream>
using namespace std;
class Hotel{
    protected:
    string hotel_name,hotel_type;
    int hotel_rate;
    public:
        void set(){
            cout<<"Enter the Name of hotel: ";
            getline(cin,hotel_name);
            cout<<"Enter the hotel type(like three star,five star..): ";
            getline(cin,hotel_type);
            cout<<"Enter hotel rate(like 2000,3000..): ";
            cin>>hotel_rate;
            cin.ignore();
        }
        void show(){
            cout<<"Hotel Name is: "<<hotel_name<<endl;
            cout<<"Hotel Type is: "<<hotel_type<<endl;
            cout<<"Hotel rate is: "<<hotel_rate<<endl;
        }
};
class Flight{
    protected:
    int flight_no;
    string source_city,destination_city;
    int seat_no;
    public:
    void setFlight(){
        cout<<"Enter the Flight Number: ";
        cin>>flight_no;
        cin.ignore();
        cout<<"Enter source city: ";
        getline(cin,source_city);
        cout<<"Enter destination city: ";
        getline(cin,destination_city);
        cout<<"Enter seat number: ";
        cin>>seat_no;
        cin.ignore();
    }
    void showFlight(){
cout<<"Flight Number is: "<<flight_no<<endl;
cout<<"Source city is: "<<source_city<<endl;
cout<<"Destination city is: "<<destination_city<<endl;
    }
};
class passanger :public Hotel,Flight{
    protected:
string name,city;
int age;
public:
void setPassanger(){
    set();
    setFlight();
    cout<<"Enter the Name of passanger: ";
    getline(cin,name);
    cout<<"Enter City of passanger: ";
    getline(cin,city);
    cout<<"Enter age of Passanger: ";
    cin>>age;
    cin.ignore();
}
    void showPassanger(){
          cout<<"Details are given as............: "<<endl;
        show();
         showFlight();
        cout<<"Name of passanger is: "<<name<<endl;
        cout<<"City of passanger is: "<<city<<endl;
        cout<<"Age of passanger is: "<<age<<endl;
    }
};
int main(){
    passanger p;
    p.setPassanger();
    p.showPassanger();
    return 0;
}