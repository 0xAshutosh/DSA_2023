#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) cin >> arr[i];

    int zeros = 0, ones = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) zeros++;
        else if (arr[i] == 1) ones++; 
    }

    cout << "No. of zeros in an array : " << zeros << endl; 
    cout << "No. of ones in an array : " << ones << endl; 

    return 0; 
}