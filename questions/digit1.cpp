#include <iostream>
using namespace std;

int main() {
    int ans = 0;
    int num;
    cout << "Enter the length of number : ";
    cin >> num;

    int i = 1;
    while (i <= num) {
        int n;
        cin >> n;

        ans = ans * 10 + n;
        i++;
    }

    cout << ans << endl;
}