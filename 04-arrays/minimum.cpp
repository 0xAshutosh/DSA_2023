#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n; 

    int arr[100];
    int mini = INT_MAX; 
    for (int i = 0; i < n; i++) cin >> arr[i]; 

    for (int i = 0; i < n; i++) {
        if (arr[i] < mini) mini = arr[i];
    }

    cout << "Minimum is : " << mini << endl; 

    return 0; 
}