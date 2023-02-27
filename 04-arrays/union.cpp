#include <iostream>
#include <vector>
using namespace std;

vector<int> findUnion(vector<int>& arr1, vector<int>& arr2) {
    vector<int> ans; 
    for (int i = 0; i < arr1.size(); i++) ans.push_back(arr1[i]); 
    for (int i = 0; i < arr2.size(); i++) ans.push_back(arr2[i]); 

    return ans; 
}

int main() {
    int n1, n2;
    cin >> n1 >> n2;
    vector<int> arr1(n1);
    vector<int> arr2(n2); 

    for (int i = 0; i < n1; i++) cin >> arr1[i]; 
    for (int i = 0; i < n2; i++) cin >> arr2[i]; 

    vector<int> ans = findUnion(arr1, arr2); 

    for (int i = 0; i < ans.size(); i++) cout << ans[i] << " ";
    cout << endl; 

    return 0; 
}