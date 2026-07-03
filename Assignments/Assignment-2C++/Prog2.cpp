// C++ Program to display addition, subtraction, multiplication and division of two integers on screen.
// Declare Class Calculation
// Write Parameterized constructor for initialize num1 and num2 Write member function for each operation.
#include<iostream>
using namespace std;
class Calculation{
   public:
    int num1,num2;
Calculation(int a,int b){
   num1=a;
   num2=b;
}
   void add(){
    cout<<"Addition of two Numbers is: "<<num1+num2<<endl;
   }
   void sub(){
    cout<<"Substraction of two Numbers is: "<<num1-num2<<endl;
   }
   void mul(){
    cout<<"Multiplication of two Numbers is: "<<num1*num2<<endl;
   }
   void div(){
    if(num2>0){

        cout<<"Divison of two Numbers is: "<<num1/num2<<endl;
    }else{
        cout<<"Divison not possible"<<endl;
    }
   }
};
int main(){
  int a,b;
  cout<<"Enter two Numbers: ";
  cin>>a>>b;

  Calculation c(a,b);
c.add();
c.sub();
c.mul();
c.div();
    return 0;
}