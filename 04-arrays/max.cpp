#include <iostream>
#include <climits> 
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[100];

    int maxi = INT_MIN; 
    
    for (int i = 0; i < n; i++) cin >> arr[i]; 

    for (int i = 0; i < n; i++) {
        if (arr[i] > maxi) maxi = arr[i]; 
    }

    cout << "Maximum in an array : " << maxi << endl; 

    return 0; 
}