#include <iostream>
using namespace std;

inline double KMtoMiles(int km) {
    return km / 1.609;
}

int main() {
    int n;
    cin >> n;

    cout << KMtoMiles(n) << endl;

    return 0;
}