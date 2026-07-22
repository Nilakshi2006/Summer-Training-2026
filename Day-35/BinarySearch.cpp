//Binary Search
#include<iostream>
using namespace std;
int main()
{
	int arr[]={5,10,15,20,25,30,35,40};
	int size=sizeof(arr)/sizeof(arr[0]);
	int target=70;
    int flag=0;
	int low=0;
	int high=size-1;
	//cout<<mid;
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(arr[mid]==target)
		{
			flag=1;
			break;
		}
		else if(arr[mid]<target)
		{
			low=mid+1;
		}
		else
		{
			high=mid-1;
		}
	}
	if(flag==1)
	{
		cout<<"Target Achieved..."<<endl;
	}
	else
	{
		cout<<"Target not Achieved..."<<endl;
	}
	return 0;
}