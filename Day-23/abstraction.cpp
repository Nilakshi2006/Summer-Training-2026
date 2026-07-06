//Abstraction
//practice of showing only the necessary information to the outside world while hiding the internal implementation details.
#include<iostream>
using namespace std;
class payment{
    private:
    int amount,pin;
    void connectingserver()
    {
        cout<<"Connecting to Bank Server...."<<endl;

    }
    void verifying()
    {
        cout<<"Verifying PIN...."<<endl;
    }
    void checkbalance()
    {
        cout<<"Checking Balance...."<<endl;
    }
    void processing()
    {
        cout<<"Processing Payment...."<<endl;
    }

    public:
    payment()
    {
        amount = 1000000;
        pin = 2002;
    }
    void pay(int x)
    {

        amount = x;
        connectingserver();
        verifying();
        checkbalance();
        processing();
        cout<<"Payment of "<<amount<<" successfull....."<<endl;
    }

};
int main()
{
    int a;
    payment obj;
    cout<<"Enter amount to pay:";
    cin>>a;
    obj.pay(500);
    return 0;
}