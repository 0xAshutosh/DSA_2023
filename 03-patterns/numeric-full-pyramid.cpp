/*
n = 5 
    1
   232
  34543
 4567654
567898765
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int row = 0; row < n; row++) {
        // print spaces;
        for (int space = 0; space < n - row - 1; space++) cout << ' ';
        // print number;
        for (int col = 0; col < row + 1; col++) cout << row + col + 1;
        // print numbers reverse;
        int num = 2 * row;
        for (int col = 0; col < row; col++) cout << num--;
        cout << endl;
    }

    return 0;
}