#include <iostream>
#include <climits>
using namespace std;

int findMin(int arr[], int size) {
    int mini = INT_MAX;
    for (int i = 0; i < size; i++) {
        if (arr[i] < mini) mini = arr[i]; 
    }
    return mini; 
}

int main() {
    int arr[100];
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << "Minimum in an array : " << findMin(arr, n) << endl; 

    return 0; 
}