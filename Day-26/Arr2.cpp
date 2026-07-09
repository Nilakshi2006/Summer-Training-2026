//find max and min by making  function
#include<iostream>
using namespace std;
int find_max(int arr[],int n){
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
    max=arr[i];
}
    }
    return max;

}
int find_min(int arr[],int n){
    int min=arr[0];
    for(int i=0;i<n;i++){
if(arr[i]<min){
    min=arr[i];
}
    }
    return min;

}
int main(){
    char str[26];
    char ch='A';
    for(int i=0;i<26;i++){
        str[i]=ch++;
    }
    //print
    cout<<"A to Z: ";
    for(char ele:str){
        cout<<ele<<" ";
    }
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
cin>>arr[i];
    }
int max=find_max(arr,n);
   cout<<"Maximum Element in Array :"<<max<<endl;
        return 0;

        int min=find_min(arr,n);
   cout<<"Minimum Element in Array :"<<min<<endl;
        return 0;
}