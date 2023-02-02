/* 
    find factorial of a number n 
    n! = n * (n - 1) * (n - 2) * ....... * 3 * 2 * 1;
    n! = n * (n - 1)!
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int fact = 1;

    for (int i = 2; i <= n; i++) fact *= i;  // fact = fact * i;
    
    cout << fact << endl;

    return 0;
}