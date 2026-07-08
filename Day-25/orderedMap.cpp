//Map
//It has key value pair and access using key  it always take unique key 
//if there are two key wth same name then it overrite the new val
#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int,string>m;
    //adding value
    m.insert({1,"Nilakshi"});    //1st way to insert
    m[2]="Abc";                  //2nd way to insert
    m.insert(make_pair(1,"xyz"));//3rd way to insert
    m.insert({4,"abc"});
    m.insert({3,"uvw"});
     for(auto ele:m){
        cout<<ele.first<<":"<<ele.second<<endl;
    }
    return 0;
}
