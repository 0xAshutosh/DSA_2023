#include <iostream>
#define PI 3.14
using namespace std;

inline int area(int r) {
    return PI * r * r;
}

int main() {
    int radius;
    cin >> radius;

    cout << area(radius) << endl;

    return 0;
}