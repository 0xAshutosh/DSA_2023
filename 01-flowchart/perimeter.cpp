/* Find perimeter of a triangle */
// perimeter of a triangle = side 1 + side 2 + side 3;
#include <iostream>
using namespace std;

int main(void) {
    int s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    int P = s1 + s2 + s3;
    cout << P << endl;

    return 0;
}