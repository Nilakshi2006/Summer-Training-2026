//2.Reverse Iterator-can update value and traverse from end to beign
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

    //Reverse iterator
    vector<int>::reverse_iterator rit;   //declaration of iterator
    for(rit=a.rbegin();rit!=a.rend();rit++){
    cout<<*rit<<" ";
    }

    // // u use this instead of vector<int>......
    // for(auto ele:a){
    //     cout<<ele<<" ";
    // }
    return 0;
 }