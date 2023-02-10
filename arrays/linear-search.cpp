#include <iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) return true;
    }

    return false;
}

int main() {
    int arr[5] = {1, 3, 5, 7, 8};
    int key;
    cin >> key;
    if (linearSearch(arr, 5, key)) cout << "Present" << endl;
    else cout << "Absent" << endl;

    return 0;
}