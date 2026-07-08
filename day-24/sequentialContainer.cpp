#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> a;
    a.push_back(10);
    a.push_back(20);
    a.push_back(30);
    a.push_back(40);
    for(int el:a){
        cout<<el<<" ";
    }
    //===========size===
    cout<<endl<<"size of vector : "<<a.size()<<endl;
    cout<<"index based access : "<<a[0]<<endl;//--------cout<<a.at(0)<<endl;
    // a.clear();
    cout<<"first element"<<*(a.begin())<<endl;
    cout<<"last element"<<*(a.end()-1)<<endl;//-----a.end()-1
    //======erase======
    a.erase(a.begin()+2);
    for(int el:a){
        cout<<el<<" ";
    }
    if(std::find(a.begin(), a.end(), 20) != a.end())
        cout << "Element 20 found" << endl;
    else
        cout << "Element 20 not found" << endl;
    return 0;
}