#include <iostream>
using namespace std;

int fact(int n) {
    if (n == 0 || n == 1) return 1;

    int ans = 1;
    for (int i = 2; i <= n; i++) ans *= i;

    return ans;
}

int nCr(int n, int r) {
    return fact(n) / (fact(n - r) * fact(r));
}

int main() {
    int n;
    cin >> n;

    for (int row = 0; row < n; row++) {
        for (int col = 0; col < row + 1; col++) {
            cout << nCr(row, col) << " "; 
        }
        cout << endl;
    }

    return 0;
}