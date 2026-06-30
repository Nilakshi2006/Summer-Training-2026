// C++ program to create a class BankAccount that stores the account number, account holder name, and balance. Implement functions to deposit money, withdraw money, and display the updated account details. Ensure that withdrawal is allowed only if sufficient balance is available.
// #include<iostream>
// using namespace std;
// class BankAccount{
//     public:
//     int AccNumber;
//     string name;
//     float balance;
//     int dMoney,wMoney;
//     float updatedDetailDeposit,updatedDetailWithdraw;

//     void calculate(){
// updatedDetailDeposit=balance+dMoney;
// cout<<"Updated detail after deposit: "<<updatedDetailDeposit<<endl;

// updatedDetailWithdraw=balance-wMoney;
// cout<<"Updated detail after withdraw: "<<updatedDetailWithdraw<<endl;
//     }

//     void show(){
// cout<<"Updated Detail after deposit: "<<updatedDetailDeposit<<endl;
// if(balance>100){
//     cout<<"Updated Detail after withdraw: "<<updatedDetailWithdraw<<endl;
// }else{
//     cout<<"No sufficient balance available"<<endl;
// }
//     }

// };

// int main(){
//     BankAccount obj1;
//     cout<<"Enter the balance: "<<endl;
//     cin>>obj1.balance;

//    cout<<"Enter the money to deposit: "<<endl;
//    cin>>obj1.dMoney;


//    cout<<"Enter the money to withdraw: "<<endl;
//    cin>>obj1.wMoney;

   

//     obj1.calculate();
//     obj1.show();
//     return 0;
// }


//optimized code
#include<iostream>
using namespace std;
class BankAccount{
public:
    int AccNumber;
    string name;
    float balance;
    int dMoney,wMoney;
    void calculate(){
        balance += dMoney;
        cout<<"Updated detail after deposit: "<<balance<<endl;
        if(balance >= wMoney){
            balance -= wMoney;
            cout<<"Updated detail after withdraw: "<<balance<<endl;
        } else {
            cout<<"No sufficient balance available for withdrawal"<<endl;
        }
    }
    void show(){
        cout<<"Final Balance: "<<balance<<endl;
    }
};
int main(){
    BankAccount obj1;
    cout<<"Enter the balance: "<<endl;
    cin>>obj1.balance;
    cout<<"Enter the money to deposit: "<<endl;
    cin>>obj1.dMoney;
    cout<<"Enter the money to withdraw: "<<endl;
    cin>>obj1.wMoney;
    obj1.calculate();
    obj1.show();
    return 0;
}