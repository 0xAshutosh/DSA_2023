/* print 1 to n but only even number */
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int i = 2;

    while (i <= n) {
        cout << i << endl;
        i += 2;
    }

    return 0;
}