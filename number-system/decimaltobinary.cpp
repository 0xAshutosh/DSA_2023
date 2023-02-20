#include <iostream>
using namespace std;

int decimalToBinary(int n) {
    int ans = 0, base = 1;
    
    while (n != 0) {
        int rem = n % 2;
        ans = rem * base + ans;
        n /= 2;
        base *= 10;
    }

    return ans;
}

int decimalToBinary2(int n) {
    int ans = 0, base = 1;

    while (n != 0) {
        int bit = (n & 1);
        ans = bit * base + ans;
        base *= 10;
        n = n >> 1; 
    }

    return ans; 
}

int binaryToDecimal(long n) {
    long ans = 0, base = 1;
    while (n != 0) {
        int rem = n % 10;
        ans = rem * base + ans;
        n /= 10;
        base *= 2;
    }

    return ans; 
}

int main() {
    int n;
    cin >> n; 

    cout << "Answer is " << decimalToBinary2(n) << endl;

    return 0;
}