// //3.Constant Iterator-A constant iterator is an iterator that allows you to iterate over the elements of a container, but it does not allow you to modify the elements.
//  #include<iostream>
// #include<vector>
// #include<iterator>
// using namespace std;

// int main(){
//     vector<int>a;
//     a.push_back(10);
//     a.push_back(20);
//     a.push_back(30);
//     a.push_back(10);
//     a.push_back(60);
//     a.push_back(40);

//     // Constant iterator
//     vector<int>::const_iterator it; // declaration of constant iterator
//     for(it = a.begin(); it != a.end(); it++){
//     if(*it==20){
//         cout<<distance(a.begin(),it);
//         //distance give difference between starting and end pointer
// cout<<endl;
// }
// }
// auto it=a.begin();   //must intialization
// for(auto it=a.begin();it!=a.end();it++){
//     cout<<*it<<" ";
// }

//     return 0;
// }