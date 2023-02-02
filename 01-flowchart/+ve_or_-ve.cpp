/*
    Check number is +ve, -ve, or zero.
*/
#include <iostream>
using namespace std;

int main(void) {
    int n;
    cin >> n;

    if (n > 0) cout << "+ve number" << endl;
    else if (n < 0) cout << "-ve number" << endl;
    else cout << "0" << endl;

    return 0;
}