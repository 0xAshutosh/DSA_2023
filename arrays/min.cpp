#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[] = {9, 12, 18, 2, 3, 1, -3, 12, 7, 6};
    int size = 11;
    int mini = INT_MAX;

    for (int i = 0; i < size; i++) {
        if (arr[i] < mini) mini = arr[i];
    }

    cout << mini << endl;

    return 0; 
}