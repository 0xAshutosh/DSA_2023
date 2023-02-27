#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr{10, 20, 30, 40};
    vector<int> arr2(10, 34);

    cout << arr.size() << endl; 
    cout << arr.capacity() << endl; 

    arr.push_back(12);
    cout << arr.size() << endl; 
    cout << arr.capacity() << endl;
    arr.push_back(88); 

    arr.pop_back(); 

    for (int i = 0; i < arr.size(); i++) cout << arr[i] << " "; 
    cout << endl; 
    for (int i = 0; i < arr2.size(); i++) cout << arr2[i] << " "; 
    cout << endl; 

    return 0; 
}