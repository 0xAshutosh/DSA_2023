#include <iostream> 
#include <climits> 

using namespace std; 

void print(int arr[], int size) {
    if (size == 0) return; 

    cout << arr[0] << " "; 

    print(arr + 1, size - 1);  
}

int maximum(int arr[], int size, int maxi) {
    if (size == 0) return maxi;  

    if (arr[0] > maxi) maxi = arr[0]; 

    return maximum(arr + 1, size - 1, maxi); 
}

bool findInString(string str, int length, char key) {
    if (length == 0) return false; 

    if (str[0] == key) return true; 

    return findInString(str, length - 1, key); 
}
// have to dry run 
void digits(int n) {
    if (n == 0) return; 


    digits(n / 10); 

    int rem = n % 10; 
    cout << rem << " "; 
}

int main() {
    int arr[8] = {10, 30, 21, 44, 32, 17, 19, 66}; 
    // cout << print(arr, 8, INT_MIN) << endl; 
    // cout << maximum(arr, 8, INT_MIN) << endl;  

    // cout << findInString("Ashu", 4, 'r') << endl;  

    int digit = 647; 

    // while (digit > 0) {
    //     int rem = digit % 10; 
    //     cout << rem << endl; 
    //     digit /= 10; 
    // }

    digits(digit); 
    cout << endl; 

    
    return 0;  
}