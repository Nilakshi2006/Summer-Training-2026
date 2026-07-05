// Write a program as per following details
// Create one base class MEDICINE with following data members Category- (i.e. stimulants, inhalants, cannabinoids) Date_of_manufacture, Company name
// Create one sub class TABLET derived from MEDICINE with following data members
// Tablet name, Price
// Create one sub class PainReliever derived from TABLET with data member Dosage_units: i.e( 1 or 2 or 3)
// Side_effects :	i.e (Nausea, Drowsiness, Dizziness.)	Use_within_days:  i.e(10 or
// 20 or 30).

// Use appropriate member function for setting and Getting above details and display details in main function.
#include<iostream>
using namespace std;

class MEDICINE {
protected:
    string category, date_of_manufacture, company_name;
public:
    void setMedicine() {
        cout << "Enter Category (stimulants/inhalants/cannabinoids): ";
        getline(cin, category);
        cout << "Enter Date of Manufacture: ";
        getline(cin, date_of_manufacture);
        cout << "Enter Company Name: ";
        getline(cin, company_name);
    }
    void showMedicine() {
        cout << "Category: " << category << endl;
        cout << "Date of Manufacture: " << date_of_manufacture << endl;
        cout << "Company Name: " << company_name << endl;
    }
};

class TABLET : public MEDICINE {
protected:
    string tablet_name;
    double price;
public:
    void setTablet() {
        setMedicine();
        cout << "Enter Tablet Name: ";
        getline(cin, tablet_name);
        cout << "Enter Price: ";
        cin >> price;
         cin.ignore();
    }
    void showTablet() {
        showMedicine();
        cout << "Tablet Name: " << tablet_name << endl;
        cout << "Price: " << price << endl;
    }
};

class PainReliever : public TABLET {
private:
    int dosage_units;
    string side_effects;
    int use_within_days;
public:
    void set() {
        setTablet();
        cout << "Enter Dosage Units (1/2/3): ";
        cin >> dosage_units; 
        cin.ignore();
        cout << "Enter Side Effects (Nausea, Drowsiness, Dizziness): ";
        getline(cin, side_effects);
        cout << "Enter Use Within Days (10/20/30): ";
        cin >> use_within_days;
         cin.ignore();
    }
    void show() {
        showTablet();
        cout << "Dosage Units: " << dosage_units << endl;
        cout << "Side Effects: " << side_effects << endl;
        cout << "Use Within Days: " << use_within_days << endl;
    }
};

int main() {
    PainReliever p;
    p.set();
    cout << "\nDetails:\n";
    p.show();
    return 0;
}