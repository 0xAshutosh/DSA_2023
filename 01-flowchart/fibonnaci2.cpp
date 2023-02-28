#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    bool flag = false; 
    int prev = 1, next = 1; 

    if (n == 1) flag = true; 
    else {
        int i = 2; 
        while (i <= n) {
            int result = prev + next; 
            prev = next; 
            next = result; 
            i++; 

            if (result == n) flag = true; 
        }
    }

    if (flag) cout << "Yes" << endl; 
    else cout << "No" << endl; 

    return 0; 
}