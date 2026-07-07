//Template
// A C++ template is a powerful feature added to C++. It allows you to define the generic 
// classes and generic functions and thus provides support for generic programming. 
// Generic programming is a technique where generic types are used as parameters in 
// algorithms so that they can work for a variety of data types.

#include<bits/stdc++.h>  //master header file..it combines?merge all header files
using namespace std;

// int add(int a,int b){
//     return a+b;
// }
// float add(float a,float b){
//     return a+b;
// }
// double add(double a,double b){
//     return a+b;
// }
//instead of above written lines only use these lines by making it generic so that it is applicable for every datatype

template<typename T>   //instead of typename u can also write class
T add(T a,T b){
    return a+b;
}
int main(){
    cout<<"For integer: "<<add(5,6)<<endl;
    cout<<"For float: "<<add(5.5f,6.5f)<<endl;
    cout<<"For double: "<<add(5.0,6.5)<<endl;
    return 0;
}