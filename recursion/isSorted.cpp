#include <iostream>
using namespace std; 

bool isSorted(int arr[], int size) {
    if (size == 0 || size == 1) return true; 

    if (arr[0] > arr[1]) return false; 

    return isSorted(arr + 1, size - 1); 
}

int main() {
    int n; 
    cin >> n; 

    int arr[100]; 

    for (int i = 0; i < n; i++) cin >> arr[i];  

    if (isSorted(arr, n)) cout << "Sorted" << endl; 
    else cout << "Not Sorted" << endl; 

    return 0; 
}