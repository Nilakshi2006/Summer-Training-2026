//QuickSort
#include<iostream>
#include<vector>
using namespace std;
int partition(vector<int>&arr,int st,int end){
    int idx=st-1;
    int pivot=arr[end];
    for(int j=st;j<end;j++){
if(arr[j]<=pivot){
    idx++;
    swap(arr[j],arr[idx]);
}
    }
    idx++;
   swap(arr[idx],arr[end]);
    return idx;
}
void quicksort(vector<int> &arr,int st,int end){
    if(st<end){
        int p_idx=partition(arr,st,end);
        quicksort(arr,st,p_idx-1);//left sub array
        quicksort(arr,p_idx+1,end);//right sub array
    }
}
int main(){
    vector<int>arr={5,3,10,4,2,7};
    //quicksort(arrname,start,end)
quicksort(arr,0,arr.size()-1);
cout<<"Array Elements:"<<endl;
for(int val:arr){
    cout<<val<<" ";
}
    return 0;
}