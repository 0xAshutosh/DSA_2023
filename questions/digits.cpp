#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n != 0) {
        cout << n % 10 << " ";
        n /= 10;
    }

    cout << endl;

    return 0;
}