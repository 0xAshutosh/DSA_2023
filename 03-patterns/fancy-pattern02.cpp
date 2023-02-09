#include <iostream>
using namespace std;

int main() {
    // use formula 3n + 2;
    int n;
    cin >> n;

    for (int row = 0; row < n; row++) {
        // printing stars;
        for (int col = 0; col < 3 + n - row; col++) cout << '*';
        // printing numbers;
        for (int col = 0; col < 2 * row + 1; col++) {
            if (col % 2 == 0) cout << row + 1;
            else cout << '*';
        }
        // printing stars;
        for (int col = 0; col < 3 + n - row; col++) cout << '*';

        cout << endl;
    }

    return 0;
}