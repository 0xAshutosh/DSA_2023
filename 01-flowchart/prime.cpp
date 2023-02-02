/* write a program to find number n is prime or not
    Prime numbers are those number which have only two factors 1 and itself 
    eg. 2, 3, 5, 7, 11, 13, 17, 19, 23.......*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int i = 2;

    while (i < n) {
        if (n % i == 0) {
            cout << "Not Prime" << endl;
            exit(0);
        }
        i++;
    }

    cout << "Prime number" << endl;
    return 0;
}