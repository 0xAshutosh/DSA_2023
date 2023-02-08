#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int row = 0; row < n; row++) {
        // printing spaces;
        for (int space = 0; space < n - row - 1; space++) cout << ' ';
        // printing numbers;
        int col;
        for (col = 0; col < row + 1; col++) cout << col + 1;
        // printing number in reverse;
        col -= 1;
        for (int col2 = 0; col2 < row; col2++) cout << col--;

        cout << endl;
    }
}