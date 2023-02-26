#include <iostream>
using namespace std;

void reverse(int arr[], int size) {
    int start = 0, end = size - 1; 

    while (start <= end) {
        int temp = arr[start];
        arr[start] = arr[end]; 
        arr[end] = temp; 

        start++;
        end--; 
    } 
}

int main() {
    int n;
    cin >> n; 

    int arr[100];
    for (int i = 0; i < n; i++) cin >> arr[i];

    reverse(arr, n); 

    for (int i = 0; i < n; i++) cout << arr[i] << " "; 

    cout << endl; 

    return 0; 
}