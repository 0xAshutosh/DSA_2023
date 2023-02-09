#include <iostream>
using namespace std;

void printPrime(int n) {
    for (int i = 2; i <= n; i++) {
        int j;
        for (j = 2; j < i; j++) {
            if (i % j == 0) break;
        }
        if (i == j) cout << i << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;

    printPrime(n);

    return 0; 
}