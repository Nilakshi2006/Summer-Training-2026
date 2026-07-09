//Find the minimum and maximum value of array
#include <bits/stdc++.h>
using namespace std;

int find_max(int arr[], int n){
    int max = arr[0];
    for(int i = 0; i < n; i++) {//traversing of array
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}
int find_min(int arr[], int n){
    int min = arr[0];
    for(int i = 0; i < n; i++) {//traversing of array
        if(arr[i] < min) {
            min = arr[i];
        }
    }

    return min;
}
int main() {
   
    // datatype variable_name[no. of element];
    char str[26];

    char ch = 'A';
    for(int i = 0; i < 26; i++) {
        str[i] = ch++;
    }

    // print
    cout << "A to Z : ";
    for(char ele : str) {
        cout << ele << " ";
    }
    cout << endl;
    // int arr[5] = {[1]=2,[4]=3};// valid in c
    int n;
    cout << "No. of Element : ";
    cin >> n;
    int arr[n];
    cout << "Enter Array element : ";
    for(int i = 0; i <n; i++) {
        cin >> arr[i];
    }
    int max = find_max(arr,n);
    cout << "Maximum : " << max << endl;
    int min = find_min(arr,n);
    cout << "Minimum : " << min << endl;
    return 0;
}