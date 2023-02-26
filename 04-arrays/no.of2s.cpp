#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; 

    int arr[100];

    for (int i = 0; i < n; i++) cin >> arr[i]; 

    int twos = 0; 

    for (int i = 0; i < n; i++) {
        if (arr[i] == 2) twos++; 
    }

    cout << "No. of twos : " << twos << endl; 

    return 0; 
}