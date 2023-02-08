#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int row;

    for (row = 0; row < n / 2; row++) {
        for (int col = 0; col < row + 1; col++) cout << 3 + row; 
        cout << endl;
    }

    return 0;
}