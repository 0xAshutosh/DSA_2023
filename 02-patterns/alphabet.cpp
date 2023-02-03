#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int row = 0; row < n; row++) {
        int col;
        for (col = 0; col < row + 1; col++) {
            char ch = 'A' + col;
            cout << ch;
        }

        for (int col = row - 1; col >= 0; col--) {
            char ch = 'A' + col;
            cout << ch;
        }
        cout << endl;
    }

    return 0;
}