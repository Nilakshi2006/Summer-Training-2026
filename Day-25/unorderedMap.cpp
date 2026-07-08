//Unordered Map
#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<int,string>m;
    //adding values
    m.insert({1,"Nilakshi"});   
    m[2]="Abc";                  
    m.insert(make_pair(1,"xyz"));
    m.insert({4,"abc"});
    m.insert({3,"uvw"});
     for(auto ele:m){
        cout<<ele.first<<":"<<ele.second<<endl;
    }
    return 0;
}
