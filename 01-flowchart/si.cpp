/* write a program to find SI Simple Interest*/
#include <iostream>
using namespace std;

int main() {
    int p, r, t;
    cin >> p >> r >> t;

    int SI = (p * r * t) / 100;
    cout << SI << endl;

    return 0;
}