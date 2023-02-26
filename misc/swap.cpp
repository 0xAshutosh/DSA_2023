#include <iostream>
using namespace std;

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp; 
}

int main() {
    int a = 10;
    int b = 20; 

    cout << "Before swap : " << endl; 
    cout << "a = " << a << endl; 
    cout << "b = " << b << endl; 

    // swap(&a, &b); 

    // swap method 2; 
    // a ^= b;
    // b ^= a; 
    // a ^= b; 

    // swap method 3; 
    // a = a + b;
    // b = a - b;
    // a = a - b; 

    // swap method 4; 
    

    cout << "After swap : " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl; 

    return 0;  
}