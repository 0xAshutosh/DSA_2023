#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int row = 0; row < 2 * n - 1; row++) {
        int cond;

        if (row < n) cond = row + 1; 
        else cond = n - (row % n) - 1;  

        for (int col = 0; col < cond; col++) cout << '*'; 
        cout << endl; 
    }

    return 0; 
}