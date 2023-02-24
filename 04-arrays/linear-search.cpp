#include <iostream>
using namespace std; 

int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) return i; 
    }

    return -1; 
}

int main() {
    int n;
    cin >> n;

    int arr[100];

    for (int i = 0; i < n; i++) cin >> arr[i]; 

    int key;
    cin >> key; 

    int ans = linearSearch(arr, n, key); 

    if (ans == -1) cout << "Key not found!" << endl; 
    else cout << "Found at index : " << ans << endl; 

    return 0;
}