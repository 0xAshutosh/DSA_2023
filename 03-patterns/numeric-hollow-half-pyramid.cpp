#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int row = 0; row < n; row++) {
        int num = 2;
        for (int col = 0; col < 2 * row + 1; col++) {
            if (col == 0) cout << 1;
            else if (col == 2 * row) cout << row + 1;
            else if (row == n - 1 && col % 2 == 0) cout << num++;
            else cout << ' ';
        }

        cout << endl;
    }

    return 0;
}