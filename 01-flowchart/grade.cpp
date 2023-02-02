/*
    if marks >= 90 then print grade A
    if marks of student >= 80 then grade of a student is B
    if marks of student >= 60 then print grade C
    if marks of student >= 40 then print grade D
    if marks of a student is less than 40 then print grade F
*/

#include <iostream>
using namespace std;

int main(void) {
    int marks;
    cin >> marks;

    if (marks >= 90) cout << "A grade" << endl;
    else if (marks >= 80) cout << "B grade" << endl;
    else if (marks >= 60) cout << "C grade" << endl;
    else if (marks >= 40) cout << "D grade" << endl;
    else cout << "F grade (Fail!)" << endl;

    return 0;
}