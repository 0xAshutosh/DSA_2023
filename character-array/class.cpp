#include <iostream>
using namespace std;

int strlen(char ch[]) {
    int i = 0; 
    while (ch[i] != '\0') i++;
    return i; 
}

void strrev(char ch[]) {
    int i = 0, j = strlen(ch) - 1;

    while (i <= j) {
        int temp = ch[i];
        ch[i] = ch[j];
        ch[j] = temp;

        i++;
        j--; 
    }
}

void replaceSpace(char ch[]) { 
    int i = 0;
    while (ch[i] != '\0') {
        if (ch[i] == ' ') ch[i] = '@';
        i++;
    }
}

bool isPalindrome(char ch[]) {
    int i = 0;
    int j = strlen(ch) - 1;

    while (i <= j) {
        if (ch[i] != ch[j]) return false;
        i++;
        j--;
    }

    return true; 
}

void toUpperCase(char ch[]) {
    int i = 0;
    while (ch[i] != '\0') {
        ch[i] = ch[i] - 'a' + 'A';  
        i++;
    }
}

int main() {
    char ch[100];
    // cin >> ch;
    cin.getline(ch, 30); 
    // cout << strlen(ch) << endl;  
    // strrev(ch); 
    // replaceSpace(ch); 
    toUpperCase(ch); 
    cout << ch << endl;  
    // if (isPalindrome(ch)) cout << "Palindrome" << endl;
    // else cout << "Not palindrome" << endl; 

    return 0; 
}