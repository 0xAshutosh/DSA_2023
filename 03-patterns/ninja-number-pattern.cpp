#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int row = 0; row < n; row++) {
        for (int col = 0; col < row + 1; col++) cout << n - row + col; 
        for (int col = 0; col < n - row - 1; col++) cout << n; 
        cout << endl; 
    }

    return 0; 
}