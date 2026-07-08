//Sorting using sort fuction with greater(to swap elements)
#include<iostream>
#include<vector>
#include<algorithm>//to use sort function this header file is added
using namespace std;
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
    cout<<"Last value: "<<*(a.end()-1)<<endl; //-1 is used so that it print last elements not the elemnt after last elements
//syntax of for each
//for(datatype identifier:object name)
for(int ele :a)//for each loop to print all elemnt
{
    cout<<ele<<" ";
}
//to sort the elements
sort(a.begin(),a.end(),greater<>()); //O(nlogn)  //greater is used to swap the elements
cout<<endl<<"Sorted vector: ";
 for(int ele :a)//for each loop to print all elemnt
{
    cout<<ele<<" ";
}
return 0;
}