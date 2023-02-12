#include <iostream>
using namespace std;

int main() {
    int arr[3][3] = {{1, 2, 3}, {5, 6, 0}, {7, 8, 7}};

    for (int i = 0; i < 3; i++) {
        int sum = 0;
        for (int j = 0; j < 3; j++) {
            sum += arr[j][i];
        }
        cout << sum << " ";
    }

    cout << endl;

    return 0; 
}