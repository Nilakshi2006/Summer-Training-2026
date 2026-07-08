//Set 
//It sort the valkue automaticaaly and take only unique value by ignoringduplicate value
// Ordered set
#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int>s;
    s.insert(10);  //to add element in set
    s.insert(20);
    s.insert(2);
    s.insert(35);
    s.insert(20);
    //traversal
    for(auto ele:s){
        cout<<ele<<" ";
    }
    //to check if element is present or not in the set
    if(s.find(20)!=s.end()){
cout<<*s.find(20)<<endl;
    }
    return 0;
}