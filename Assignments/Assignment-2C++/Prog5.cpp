//  C++ program to demonstrate ATM money withdrawal and deposit process by taking following private data members:
// Accountno, balance;
// Account no and balance data member initialize using parameterized constructor Write three function 1. Deposit 2. Withdraw 3. Balance
// Write menu driven choice
// 1.Deposit
// 2.Withdraw
// 3.Balance
// 4.Exit
// Program stop execution when user enter choice
#include<iostream>
using namespace std;

class ATM {
private:
    int Accountno;
    float balance;
public:
    ATM(int Accno, float Bal) {
        Accountno = Accno;
        balance = Bal;
    }
    void deposit() {
        float amount;
        cout << "Enter amount to deposit: ";
        cin >> amount;
        if (amount > 0) {
            balance += amount;
            cout << "Final balance after deposit: " << balance << endl;
        } else {
            cout << "Invalid amount!" << endl;
        }
    }
    void withdraw() {
        float amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Final balance after withdraw: " << balance << endl;
        } else {
            cout << "Insufficient balance or invalid amount!" << endl;
        }
    }
    void checkBalance() {
        cout << "The balance is: " << balance << endl;
    }
};

int main() {
    int Accno;
    float initialBal;
    cout << "Enter Account Number: ";
    cin >> Accno;
    cout << "Enter Initial Balance: ";
    cin >> initialBal;
    ATM atm(Accno, initialBal);
    int choice;
    do {
        cout << "\n1. Deposit\n2. Withdraw\n3. Balance\n4. Exit\nEnter choice: ";
        cin >> choice;
        switch(choice) {
            case 1: atm.deposit(); break;
            case 2: atm.withdraw(); break;
            case 3: atm.checkBalance(); break;
            case 4: cout << "Exiting.....\n"; break;
            default: cout << "Invalid choice!\n";
        }
    } while(choice != 4);
    return 0;
}