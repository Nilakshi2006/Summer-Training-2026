//Find second largest of array
#include<iostream>
using namespace std;

int main() {
    int arr[100], n, max, sMax;
    cout << "Enter the size of arr: ";
    cin >> n;

    cout << "Enter the elements of arr: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    max = sMax = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            sMax = max;
            max = arr[i];
        } else if (arr[i] > sMax && arr[i] != max) {
            sMax = arr[i];
        }
    }

    if (sMax == max) {
        cout << "No second maximum element found.";
    } else {
        cout << "Second maximum element is: " << sMax;
    }

    return 0;
}