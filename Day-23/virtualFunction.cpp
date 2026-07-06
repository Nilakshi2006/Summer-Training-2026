#include<iostream>
using namespace std;
class payment{
    public:
   virtual void pay(){
        cout<<"General Payment"<<endl;
    }
};
class googlePay:public payment{
public:
void pay(){
    cout<<"Payment through google pay"<<endl;
}
};
class debit:public payment{
    public:
    void pay(){
        cout<<"Payment through debit card"<<endl;
    }
};
int main(){
    payment*ptr; //pointer to base class
    int choice;
cout<<"1. Google pay"<<endl;
cout<<"2. Debit card"<<endl;
cout<<"Enter your choice:"<<endl;
cin>>choice;
if(choice==1){
    ptr=new googlePay();   //run time allocation using new keyword
    //ptr points to object of class googlepay
    //above line can also be written as
//     googlePay p1;
// ptr=&p1;   //compile time execution
}else if(choice==2){
    ptr=new debit();
    //ptr points to object of class debit
}
else{
    cout<<"Invalid choice!"<<endl;
}
ptr->pay();
delete ptr;
ptr=NULL;
    return 0;
}