#include <iostream>
using namespace std;

int decimalToBinary(int n) {
    int ans = 0, base = 1;

    while (n != 0) {
        int rem = n % 2;
        ans = rem * base + ans;
        base *= 10;
        n /= 2;
    }

    return ans;
}

int main() {
    int n;
    cin >> n;

    cout << decimalToBinary(n) << endl;

    return 0;
}