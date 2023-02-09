#include <iostream>
using namespace std;

bool evenOrOdd(int n) {
    if (n % 2 == 0) return true;

    return false;
}

int main(void) {
    int n;
    cin >> n;

    if (evenOrOdd(n)) cout << "Even number" << endl;
    else cout << "Odd number" << endl;
}