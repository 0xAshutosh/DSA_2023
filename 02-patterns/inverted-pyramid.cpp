#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        // print spaces
        for (int space = 0; space < i; space++) cout << ' ';
        // print stars
        for (int j = 0; j < n - i; j++) cout << "* ";
        cout << endl;
    }

    return 0;
}