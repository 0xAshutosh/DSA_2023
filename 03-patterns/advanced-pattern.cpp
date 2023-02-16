#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; 

    int num = 1, x = 4 * n - 4; 
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n; col++) {
            if (row == 0 || col == n - 1) cout << num++;  
            else if (col == 0 || row == n - 1) cout << x--; 
            else cout << ' ';
        }
        cout << endl; 
    }

    return 0; 
}