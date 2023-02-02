/* hollow full pyramild */
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // for (int i = 0; i < n; i++) {
    //     // print spaces;
    //     for (int space = 0; space < n - i - 1; space++) cout << ' ';
    //     // print stars;
    //     for (int j = 0; j < 2 * i + 1; j++) {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    for (int i = 0; i < n; i++) {
        // print spaces;
        for (int space = 0; space < n - i - 1; space++) cout << ' ';
        // print stars;
        if (i == 0 || i == n - 1) {
            for (int j = 0; j < 2 * i + 1; j++) cout << '*';
        } else {
            cout << '*';
            for (int j = 0; j < (2 * i + 1) - 2; j++) cout << ' ';
            cout << '*';
        }
        cout << endl;
    }
}