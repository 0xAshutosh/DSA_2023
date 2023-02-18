#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; 

    int arr[100];
    int zero = 0, one = 0; 

    for (int i = 0; i < n; i++) cin >> arr[i];

    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) zero++;
        else if (arr[i] == 1) one++; 
    }

    cout << "Numbers of zeros in an array : " << zero << endl; 
    cout << "Numbers of one in an array : " << one << endl; 

    return 0; 
}