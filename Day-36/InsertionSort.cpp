//Insertion Sort
#include<iostream>
using namespace std;
int main(){
    int arr[]={5,3,4,2,10,8};
        //formula to find size of arr
        int n=sizeof(arr)/sizeof(arr[0]);
        for(int i=1;i<n;i++){
            int prev=i-1;
            int curr=arr[i];
while(prev>=0 && arr[prev]>curr){
    arr[prev+1]=arr[prev];
    prev--;
}
arr[prev+1]=curr;
        }
        cout<<"Array Elements:"<<endl;
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        return 0;
}