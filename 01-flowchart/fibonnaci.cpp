#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; 

    if (n == 0) cout << "0" << endl; 
    else if (n == 1) cout << "1" << endl; 
    else {
        int i = 3, prev = 1, next = 1; 
        cout << "1 1 "; 
        while (i <= n) {
            int result = prev + next; 
            cout << result << " "; 
            prev = next; 
            next = result; 
            i++; 
        }
    }

    cout << endl; 
    
    return 0; 
}