#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr{10, 20, 30, 40};

    for (int i = 0; i < arr.size(); i++) {
        for (int j = i + 1;  j < arr.size(); j++) {
            for (int k = j + 1; k < arr.size(); k++) {
                for (int m = k + 1; m < arr.size(); m++) {
                    if (arr[i] + arr[j] + arr[k] + arr[m])
                }
            }
        }
    }
}