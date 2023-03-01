#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n;
	cin >> n; 

	int prev; 
	cin >> prev; 

	int i = 1; 
	bool isDecreasing = true, isIncreasing = false, flag = true; 

	while (i < n) {
		int current; 
		cin >> current; 

		if (prev == current) {
			flag = false; 
			break; 
		} else if (prev > current) {
			if (isIncreasing) {
				flag = false; 
				break; 
			}
			isDecreasing = true; 
			isIncreasing = false; 
		} else if (prev < current) {
			isIncreasing = true; 
			isDecreasing = false; 
		}
		prev = current; 
		i++; 
	}

	if (flag) cout << "true" << endl; 
	else cout << "false" << endl; 

	return 0; 
}
