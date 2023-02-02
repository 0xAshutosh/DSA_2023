/* circumference of a circle 
   circumference = 2 * PI * radius;
*/

#include <iostream>
#define PI 3.14
using namespace std;

int main(void) {
    int r;
    cin >> r;
    float circum = 2 * PI * r;
    cout << circum << endl;

    return 0;
}