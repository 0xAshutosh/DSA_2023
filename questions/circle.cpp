#include <iostream>
#define PI 3.14 
using namespace std;

int area(int radius) {
    return PI * radius * radius;
}

int main() {
    int r;
    cin >> r;
    cout << area(r) << endl;

    return 0;
}