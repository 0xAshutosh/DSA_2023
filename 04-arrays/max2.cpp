#include <iostream>
#include <climits>
using namespace std; 

int findMax(int arr[], int size) {
    int max = INT_MIN; 

    for (int i = 0; i < size; i++) {
        if (arr[i] > max) max = arr[i]; 
    }

    return max; 
}

int main() {
    int n;
    cin >> n;

    int arr[100];

    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << "Maximum in an array : " << findMax(arr, n) << endl;

    return 0;
}