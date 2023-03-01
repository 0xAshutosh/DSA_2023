#include<iostream>
using namespace std;
#include <climits>


int main(){
    
    // Write your code here
    int n; 
    cin >> n; 

    int i = 1; 
    int max = INT_MIN, smax = INT_MIN; 
    while (i <= n) {
        int temp; 
        cin >> temp; 
        if (temp < max && smax < temp) smax = temp; 
        if (temp > max ) { 
            smax = max; 
            max = temp; 
        }
        i++; 
    }

    cout << smax << endl; 
    return 0; 
}


