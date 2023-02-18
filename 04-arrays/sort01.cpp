#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr{0, 1, 1, 0, 1, 0, 1, 0, 0};

    int start = 0, end = arr.size() - 1;

    while (start <= end) {
        if (arr[start] == 0) start++;
        else if (arr[end] == 1) end--;
        else if (arr[start] == 1 && arr[end] == 0) {
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;

            start++;
            end--;
        }
    }

    for (auto i: arr) cout << i << " ";
    cout << endl;

    return 0; 
}