#include <iostream>
using namespace std;

int prime(int n) {
    for (int i = 2; i < n; i++) {
        if (n % i == 0) return false;
    }

    return true;
}

int main() {
    int n;
    cin >> n;

    if (prime(n)) cout << "Prime" << endl;
    else cout << "Non prime" << endl;

    return 0;
}