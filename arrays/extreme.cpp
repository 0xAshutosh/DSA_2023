#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; 

    int arr[100];
    for (int i = 0; i < n; i++) cin >> arr[i]; 

    // printing extreme; 
    int i = 0, j = n - 1;
    while (i <= j) {
        cout << arr[i] << " "; 
        i++;
        cout << arr[j] << " "; 
        j--; 
    }

    cout << endl; 

    return 0; 
}