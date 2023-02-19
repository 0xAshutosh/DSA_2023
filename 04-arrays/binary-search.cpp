#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key) {
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2; 

    while (s <= e) {
        if (arr[mid] == key) return mid;
        else if (key > arr[mid]) s = mid + 1;
        else e = mid - 1; 

        mid = s + (e - s) / 2;
    }

    return -1; 
}

int main(void) {
    int n;
    cin >> n; 

    int arr[100];

    for (int i = 0; i < n; i++) cin >> arr[i];
    int key;
    cin >> key; 

    cout << "Found at index : " << binarySearch(arr, n, key) << endl; 

    return 0; 
}