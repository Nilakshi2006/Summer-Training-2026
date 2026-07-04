// Create a class named 'Programming'. While creating an object of the class, if nothing is passed to it, then the message "I love programming languages" should be printed. If some String is passed to it, then in place of "programming languages" the name of that String variable should be printed.
// For example, while creating the object if we pass "cpp", then "I love cpp" should be printed.
#include<iostream>
using namespace std;
class Programming{
    public:
    Programming(){
        cout<<"I Love Programming languages"<<endl;
    }
    Programming(string lang){
        cout<<"I Love "<<lang<<endl;
    }
};
int main(){
    Programming p1;
Programming p2("Myself");
    return 0;
}