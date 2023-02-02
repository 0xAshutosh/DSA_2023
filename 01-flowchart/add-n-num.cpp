/* add n numbers from user */

#include <iostream>
using namespace std;

int main(void) {
    int n;
    cin >> n;

    int i = 1, sum = 0;

    while (i <= n) {
        int num; 
        cin >> num;
        sum += num; // sum = sum + num;
        i++;
    }

    cout << sum << endl;

    return 0;
}