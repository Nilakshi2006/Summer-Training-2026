 //Iterator
 //It is an object work like pointer and used for traversing
 //It is of 3 types
 //1.Forward Iterator-can update value and traverse from begin to end
 #include<iostream>
 #include<vector>
 using namespace std;
 int main(){
       vector<int>a;   
    a.push_back(10);
    a.push_back(20);
    a.push_back(30);
  a.push_back(10);
    a.push_back(60);
    a.push_back(40);

    //Forward iterator
    vector<int>::iterator it;   //declaration of iterator
    for(it=a.begin();it!=a.end();it++){
    cout<<*it<<" ";
    }

    // // u use this instead of vector<int>......
    // for(auto ele:a){
    //     cout<<ele<<" ";
    // }
    return 0;
 }