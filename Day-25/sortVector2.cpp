//Another way to sort vector using compare function 
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool compare(int a,int b){

    if(a>b){
        return false;
    }
    
    else{
        return true;
    }
}
int main(){
    vector<int>a;   
    a.push_back(10);
    a.push_back(20);
    a.push_back(30);
  a.push_back(10);
    a.push_back(60);
    a.push_back(40);

    cout<<"Front element: "<<a.front()<<endl;
    cout<<"Last element: "<<a.back()<<endl;
    cout<<"Last value: "<<*(a.end()-1)<<endl; 
for(int ele :a)
{
    cout<<ele<<" ";
}
//to sort the elements
sort(a.begin(),a.end(),compare); 
cout<<endl<<"Sorted vector: ";
for(int ele :a)
{
    cout<<ele<<" ";
}
return 0;
}