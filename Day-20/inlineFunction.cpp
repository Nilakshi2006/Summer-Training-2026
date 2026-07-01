//Inline function
// It make code execute fatser by sending request to compiler and is used in larger codes
#include<iostream>
using namespace std;
inline int cube(int x){
    return x*x*x;
}
int main(){
    cout<<"Cube of Number:"<<cube(5)<<endl;
return 0;
}