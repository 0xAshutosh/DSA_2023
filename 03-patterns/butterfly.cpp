#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int row = 0; row < n; row++) {
        // printing stars;
        for (int col = 0; col < row + 1; col++) cout << '*';
        // printing space;
        for (int space = 0; space < 2 * (n - row) - 2; space++) cout << ' ';
        // printing stars;
        for (int col = 0; col < row + 1; col++) cout << '*';
        
        cout << endl;
    }

    for (int row = 0; row < n; row++) {
        // printing stars;
        for (int col = 0; col < n - row; col++) cout << '*';
        // printing space;
        for (int space = 0; space < 2 * row; space++) cout << ' ';
        // printing stars;
        for (int col = 0; col < n - row; col++) cout << '*';

        cout << endl; 
    }

    return 0;  
}