//Calculator using template
#include<iostream>
using namespace std;
template<typename T>
class Calculator{
private:
    int a, b;

public:
    Calculator(){}  //default constructer
    Calculator(T a, T b){
       this->a=a;
       this->b=b;
    }

    T add(){
        return a+b;
    }
    T subtract(){
    return a-b;
    }
   T multiply(){
       return a*b;
    }
    T divide(){
        if(b != 0)
         return a/b;
        else
            cout << "Cannot divide by 0" << endl;
    }
};

int main(){
   int a=10,b=20;
   Calculator<int>c1(a,b); //object for intereger
   cout<<"Add: "<<c1.add()<<endl;
   cout<<"Multiply: "<<c1.multiply()<<endl;

   Calculator<double>c2(5.5,6.34); //object for double
   cout<<"Add: "<<c2.add()<<endl;
   cout<<"Divide: "<<c2.divide()<<endl;
    
    return 0;
}