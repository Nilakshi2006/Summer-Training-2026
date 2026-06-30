// #include<iostream>
// using namespace std;
// int x=100;//global varibale
// int main(){
//     //more preference is given to local so local variable is print in cout
//     //if local not available more preference is given to global
//     int x=50;//local variable
//     cout<<"X="<<x<<endl;
//     return 0;
// }

//to give preference to global (having local too in the code) we amke use of SRO(::)
#include<iostream>
using namespace std;
int x=100;//global varibale
int main(){
    //more preference is given to local so local variable is print in cout
    //if local not available more preference is given to global
    int x=50;//local variable
    cout<<"X="<<x<<endl;
    cout<<"Global X="<<::x;
    return 0;
}