//Reverse the first two elements fo arr and store it in new arr
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    rotate(arr.begin(), arr.begin() + 2, arr.end());

    cout << "Rotated array: ";
    for (int x : arr) cout << x << " ";
    return 0;
}