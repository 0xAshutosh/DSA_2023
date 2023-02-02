/* write a program to know whether a triangle is valid or not 
    valid triangle = sum of two sides > sum of third side */
#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if (a + b > c && b + c > a && a + c > b) cout << "Valid Triangle" << endl;
    else cout << "Invalid triangle" << endl;

    return 0;
}