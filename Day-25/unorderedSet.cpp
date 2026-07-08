//Unordered set-It dont give value in ordered or in ascending?descending order
#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_set<int>us;
    //adding values
    us.insert(20);
    us.insert(2);
    us.insert(6);
    us.insert(26);
//traversal
for(auto ele:us){
    cout<<ele<<" ";
}
if(us.find(20)!=us.end()){
    cout<<"Present"<<endl;
}else{
    cout<<"Absent"<<endl;
}
    return 0;
}