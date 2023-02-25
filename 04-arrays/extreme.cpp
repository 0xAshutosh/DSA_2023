#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) cin >> arr[i]; 

    int start = 0, end = n - 1; 

    while (start <= end) {
        if (start == end) cout << arr[start] << " ";
        else {
            cout << arr[start] << " ";
            cout << arr[end] << " ";
        }

        start++;
        end--; 
    }
     
    cout << endl;

    return 0; 
}