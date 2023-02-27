#include <iostream>
#include <vector>
using namespace std;

int findUnique(vector<int>& arr) {
    int unique = 0;
    for (int i = 0; i < arr.size(); i++) unique = unique ^ arr[i]; 

    return unique; 
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << "Unique element is : " << findUnique(arr) << endl; 

    return 0; 
}