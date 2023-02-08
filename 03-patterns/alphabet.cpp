#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int row = 0; row < n; row++) {
        char prev = 'A';
        for (int col = 0; col < row + 1; col++) cout << prev++;
        prev -= 2;
        for (int col = 0; col < row; col++) cout << prev--;
        cout << endl;
    }
}