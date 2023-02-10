#include <iostream>
using namespace std;

int main() {
    int arr[] = {0, 1, 1, 1, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1};
    int size = 15;

    int zero = 0, one = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] == 0) zero++;
        else if (arr[i] == 1) one++;
    }

    cout << "No of zeros " << zero << endl;
    cout << "No of one " << one << endl;

    return 0; 
}