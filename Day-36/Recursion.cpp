//Recursion
#include<iostream>
using namespace std;
int fact(int n){
    if(n==1)   //Base Case
    {
        return 1;
    }
    return n*fact(n-1);   //Recursive Case
}
int main(){
int out=fact(5);
cout<<"Output is: "<<out<<endl;
return 0;
}