//Vector
//It is dynamic sized arr that resize itself autmoantically.It has more functions than arr
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>a;   //intialization of vector
    a.push_back(10);  //adding element in vector
    a.push_back(20);
    a.push_back(30);

    cout<<"Front element: "<<a.front()<<endl;
    cout<<"Last element: "<<a.back()<<endl;
    cout<<"Last value: "<<*(a.end()-1)<<endl; //-1 is used so that it print last elements not the elemnt after last elements

}