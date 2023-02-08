#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int row = 0; row < n; row++) {
        int num = 1;
        for (int col = 0; col < 2 * (n - row) - 1; col++) {
            if (row == 0 && col % 2 == 0) cout << num++;
            else if (col == 0) cout << row + 1;
            else if (col == 2 * (n - row) - 2) cout << n;
            else cout << ' ';
        }

        cout << endl; 
    }

    return 0; 
}