#include <iostream>
using namespace std;

int setBits(int n) {
    int bits = 0;

    while (n != 0) {
        if (n & 1 == 1) bits++;
        n = n >> 1;
    }

    return bits;
}

int main() {
    int n;
    cin >> n;

    cout << setBits(n) << endl;

    return 0;
}