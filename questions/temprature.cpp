#include <iostream>
using namespace std;

int celciusToFarenheit(int cel) {
    float ans = ((cel * 9) / 5) + 32;
    return ans;
}

int main() {
    int n;
    cin >> n;

    cout << celciusToFarenheit(n) << endl;

    return 0; 
}