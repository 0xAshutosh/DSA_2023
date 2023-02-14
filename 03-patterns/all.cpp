#include <iostream>
using namespace std;

int main() {
    // int m, n;
    // cin >> m >> n;

    // for (int row = 0; row < m; row++) {
    //     for (int col = 0; col < n; col++) cout << '*';
    //     cout << endl;
    // }

    // for (int row = 0; row < m; row++) {
    //     if (row == 0 || row == m - 1) {
    //         for (int col = 0; col < n; col++) cout << "*";
    //     } else {
    //         cout << "*";
    //         for (int col = 0; col < n - 2; col++) cout << ' ';
    //         cout << "*";
    //     }

    //     cout << endl;
    // }

    int n;
    cin >> n;

    // for (int row = 0; row < n; row++) {
    //     for (int col = 0; col < row + 1; col++) cout << '*';
    //     cout << endl;
    // }

    // for (int row = 0; row < n; row++) {
    //     for (int col = 0; col < n - row; col++) cout << '*';
    //     cout << endl;
    // }

    // for (int row = 0; row < n; row++) {
    //     for (int col = 0; col < row + 1; col++) cout << col + 1;
    //     cout << endl; 
    // }

    // for (int row = 0; row < n; row++) {
    //     for (int col = 0; col < n - row; col++) cout << col + 1;
    //     cout << endl; 
    // }

    // for (int row = 0; row < n; row++) {
    //     // print space;
    //     for (int space = 0; space < n - row - 1; space++) cout << ' ';
    //     // print stars;
    //     for (int col = 0; col < row + 1; col++) cout << "* ";
    //     cout << endl;
    // }

    // for (int row = 0; row < n; row++) {
    //     // print spaces;
    //     for (int space = 0; space < row; space++) cout << ' ';
    //     // print stars;
    //     for (int col = 0; col < n - row; col++) cout << "* ";
    //     cout << endl; 
    // } 

    // for (int row = 0; row < n; row++) {
    //     // print spaces; 
    //     for (int space = 0; space < n - row - 1; space++) cout << ' ';
    //     // print numbers;
    //     for (int col = 0; col < row + 1; col++) cout << row + col + 1; 
    //     // print num in reverse;
    //     int num = 2 * row; 
    //     for (int col = 0; col < row; col++) cout << num--;  
    //     cout << endl;
    // } 

    // numeric hollow full pyramid; 
    // for (int row = 0; row < n; row++) {
    //     // print spaces;
    //     for (int space = 0; space < n - row - 1; space++) cout << ' ';
    //     // print numbers;
    //     int num = 2;
    //     for (int col = 0; col < 2 * row + 1; col++) {
    //         if (col == 0) cout << 1; 
    //         else if (col == 2 * row) cout << row + 1;
    //         else if (row == n - 1 && col % 2 == 0) cout << num++;
    //         else cout << ' '; 
    //     }
    //     cout << endl; 
    // }

    for (int row = 0; row < n; row++) {
        // print spaces;
        for (int space = 0; space < n - row - 1; space++) cout << ' ';
        // print stars;
        for (int col = 0; col < row + 1; col++) cout << "* ";
        cout << endl;
    }

    for (int row = 0; row < n; row++) {
        // print spaces;
        for (int space = 0; space < row; space++) cout << ' ';
        // print stars;
        for (int col = 0; col < n - row; col++) cout << "* "; 
        cout << endl;  
    }

   
    return 0;
}