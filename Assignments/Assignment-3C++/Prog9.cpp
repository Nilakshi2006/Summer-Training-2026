// All the banks operating in India are controlled by RBI. RBI has set a well defined guideline (e.g. minimum interest rate, minimum balance allowed, maximum withdrawal limit etc) which all banks must follow. For example, suppose RBI has set minimum interest rate applicable to a saving bank account to be 4% annually; however, banks are free to use 4% interest rate or to set any rates above it.
// Write a program to implement bank functionality in the above scenario. Note: Create few classes namely Customer, Account, RBI (Base Class) and few derived classes (SBI, ICICI, PNB etc). Assume and implement required member variables and functions in each class.
#include <iostream>
#include <string>

using namespace std;

// Base class RBI
class RBI {
protected:
    double minInterestRate;
    double minBalance;
    double maxWithdrawalLimit;

public:
    RBI() {
        minInterestRate = 4.0; // 4% annual interest rate
        minBalance = 1000.0;
        maxWithdrawalLimit = 50000.0;
    }

    void displayDetails() {
        cout << "Minimum Interest Rate: " << minInterestRate << "%" << endl;
        cout << "Minimum Balance: " << minBalance << endl;
        cout << "Maximum Withdrawal Limit: " << maxWithdrawalLimit << endl;
    }

    double getMinInterestRate() {
        return minInterestRate;
    }

    double getMinBalance() {
        return minBalance;
    }

    double getMaxWithdrawalLimit() {
        return maxWithdrawalLimit;
    }
};

// Customer class
class Customer {
private:
    string name;
    string address;

public:
    Customer(string name, string address) {
        this->name = name;
        this->address = address;
    }

    string getName() {
        return name;
    }

    string getAddress() {
        return address;
    }
};

// Account class
class Account {
protected:
    Customer customer;
    double balance;
    double interestRate;
    RBI rbi;

public:
    Account(Customer customer, double balance, double interestRate) : customer(customer) {
        this->balance = balance;
        this->interestRate = interestRate;
    }

    virtual void deposit(double amount) {
        balance += amount;
        cout << "Deposited " << amount << ". Current balance: " << balance << endl;
    }

    virtual void withdraw(double amount) {
        if (balance >= amount && amount <= rbi.getMaxWithdrawalLimit()) {
            balance -= amount;
            cout << "Withdrawn " << amount << ". Current balance: " << balance << endl;
        } else {
            cout << "Insufficient balance or exceeds withdrawal limit." << endl;
        }
    }

    virtual void displayDetails() {
        cout << "Customer Name: " << customer.getName() << endl;
        cout << "Address: " << customer.getAddress() << endl;
        cout << "Balance: " << balance << endl;
        cout << "Interest Rate: " << interestRate << "%" << endl;
    }
};

// Derived classes for specific banks
class SBI : public Account {
public:
    SBI(Customer customer, double balance) : Account(customer, balance, 4.5) {}

    void displayDetails() override {
        cout << "SBI Account Details:" << endl;
        Account::displayDetails();
        RBI rbi;
        rbi.displayDetails();
    }
};

class ICICI : public Account {
public:
    ICICI(Customer customer, double balance) : Account(customer, balance, 5.0) {}

    void displayDetails() override {
        cout << "ICICI Account Details:" << endl;
        Account::displayDetails();
        RBI rbi;
        rbi.displayDetails();
    }
};

class PNB : public Account {
public:
    PNB(Customer customer, double balance) : Account(customer, balance, 4.25) {}

    void displayDetails() override {
        cout << "PNB Account Details:" << endl;
        Account::displayDetails();
        RBI rbi;
        rbi.displayDetails();
    }
};

int main() {
    Customer customer1("John Doe", "123 Main St");
    SBI sbiAccount(customer1, 10000.0);
    sbiAccount.displayDetails();
    sbiAccount.deposit(5000.0);
    sbiAccount.withdraw(2000.0);

    Customer customer2("Jane Doe", "456 Elm St");
    ICICI iciciAccount(customer2, 20000.0);
    iciciAccount.displayDetails();
    iciciAccount.deposit(10000.0);
    iciciAccount.withdraw(5000.0);

    return 0;
}