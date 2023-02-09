#include <iostream>
using namespace std;

int main() {
    int n, ans = 0;
    cin >> n;

    int i = 1;
    while (i <= n) {
        int num;
        cin >> num;

        ans = ans * 10 + num;
        i++;
    }

    cout << ans << endl;

    return 0;
}