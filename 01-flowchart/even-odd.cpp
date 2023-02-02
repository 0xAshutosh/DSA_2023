/* check a number is even or odd
   Even numbers are number that are divisible by 2 (remainder [%] = 0)
   Odd numbers are number that are not divisible by 2 
*/

#include <iostream>
using namespace std;

int main(void) {
    int n;
    
    cin >> n;

    if (n % 2 == 0) cout << "Even Number" << endl;
    else cout << "Odd Number" << endl;

    return 0;
}