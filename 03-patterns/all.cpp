#include <iostream>
using namespace std;
// int fact(int n) {
//     if (n == 0 || n == 1) return 1;
//     int num = 1;
//     for (int i = 2; i <= n; i++) num *= i; 

//     return num; 
// }

// int ncr(int n, int r) {
//     return fact(n) / (fact(n - r) * fact(r)); 
// }

int main() {
    // int m, n;
    // cin >> m >> n;

    // for (int row = 0; row < m; row++) {
    //     for (int col = 0; col < n; col++) cout << '*';
    //     cout << endl;
    // }

    // for (int row = 0; row < m; row++) {
    //     if (row == 0 || row == m - 1) {
    //         for (int col = 0; col < n; col++) cout << "*";
    //     } else {
    //         cout << "*";
    //         for (int col = 0; col < n - 2; col++) cout << ' ';
    //         cout << "*";
    //     }

    //     cout << endl;
    // }

    int n;
    cin >> n;

    // for (int row = 0; row < n; row++) {
    //     for (int col = 0; col < row + 1; col++) cout << '*';
    //     cout << endl;
    // }

    // for (int row = 0; row < n; row++) {
    //     for (int col = 0; col < n - row; col++) cout << '*';
    //     cout << endl;
    // }

    // for (int row = 0; row < n; row++) {
    //     for (int col = 0; col < row + 1; col++) cout << col + 1;
    //     cout << endl; 
    // }

    // for (int row = 0; row < n; row++) {
    //     for (int col = 0; col < n - row; col++) cout << col + 1;
    //     cout << endl; 
    // }

    // for (int row = 0; row < n; row++) {
    //     // print space;
    //     for (int space = 0; space < n - row - 1; space++) cout << ' ';
    //     // print stars;
    //     for (int col = 0; col < row + 1; col++) cout << "* ";
    //     cout << endl;
    // }

    // for (int row = 0; row < n; row++) {
    //     // print spaces;
    //     for (int space = 0; space < row; space++) cout << ' ';
    //     // print stars;
    //     for (int col = 0; col < n - row; col++) cout << "* ";
    //     cout << endl; 
    // } 

    // for (int row = 0; row < n; row++) {
    //     // print spaces; 
    //     for (int space = 0; space < n - row - 1; space++) cout << ' ';
    //     // print numbers;
    //     for (int col = 0; col < row + 1; col++) cout << row + col + 1; 
    //     // print num in reverse;
    //     int num = 2 * row; 
    //     for (int col = 0; col < row; col++) cout << num--;  
    //     cout << endl;
    // } 

    // numeric hollow full pyramid; 
    // for (int row = 0; row < n; row++) {
    //     // print spaces;
    //     for (int space = 0; space < n - row - 1; space++) cout << ' ';
    //     // print numbers;
    //     int num = 2;
    //     for (int col = 0; col < 2 * row + 1; col++) {
    //         if (col == 0) cout << 1; 
    //         else if (col == 2 * row) cout << row + 1;
    //         else if (row == n - 1 && col % 2 == 0) cout << num++;
    //         else cout << ' '; 
    //     }
    //     cout << endl; 
    // }

    // for (int row = 0; row < n; row++) {
    //     // print spaces;
    //     for (int space = 0; space < n - row - 1; space++) cout << ' ';
    //     // print stars;
    //     for (int col = 0; col < row + 1; col++) cout << "* ";
    //     cout << endl;
    // }

    // for (int row = 0; row < n; row++) {
    //     // print spaces;
    //     for (int space = 0; space < row; space++) cout << ' ';
    //     // print stars;
    //     for (int col = 0; col < n - row; col++) cout << "* "; 
    //     cout << endl;  
    // }

    // hollow diamond 

    // for (int row = 0; row < n; row++) {
    //     // printing spaces;
    //     for (int space = 0; space < n - row - 1; space++) cout << ' ';
    //     // printing stars;
    //     for (int col = 0; col < 2 * row + 1; col++) {
    //         if (col == 0 || col == 2 * row) cout << '*';
    //         else cout << ' ';
    //     }
    //     cout << endl; 
    // }

    // for (int row = 0; row < n; row++) {
    //     // printing spaces;
    //     for (int space = 0; space < row; space++) cout << ' '; 
    //     // printing stars;
    //     for (int col = 0; col < 2 * (n - row) - 1; col++) {
    //         if (col == 0 || col == 2 * (n - row) - 2) cout << '*';
    //         else cout << ' ';
    //     }

    //     cout << endl; 
    // }

    // flipped solid diamond 
    // for (int row = 0; row < n; row++) {
    //     // printing stars;
    //     for (int col = 0; col < n - row; col++) cout << '*';
    //     // printing spaces; 
    //     for (int space = 0; space < 2 * row + 1; space++) cout << ' ';
    //     // printing stars;
    //     for (int col = 0; col < n - row; col++) cout << '*';
    //     cout << endl; 
    // } 

    // for (int row = 0; row < n; row++) {
    //     // printing stars;
    //     for (int col = 0; col < row + 1; col++) cout << '*';
    //     // printing spaces;
    //     for (int space = 0; space < 2 * (n - row) - 1; space++) cout << ' '; 
    //     // printing stars;
    //     for (int col = 0; col < row + 1; col++) cout << '*'; 
    //     cout << endl;   
    // }

    // alphabet palindrome pattern; 
    // for (int row = 0; row < n; row++) {
    //     char ch = 'A';
    //     for (int col = 0; col < row + 1; col++) {
    //         cout << ch++;
    //     }

    //     ch -= 2; 
    //     for (int col = 0; col < row; col++) cout << ch--; 
    //     cout << endl;  
    // } 

    // square;

    // for (int row = 0; row < n; row++) {
    //     for (int col = 0; col < n; col++) cout << "*";
    //     cout << endl; 
    // }


    // hollow square;
    // for (int row = 0; row < n; row++) {
    //     for (int col = 0; col < n; col++) {
    //         if (row == 0 || row == n - 1 || col == 0 || col == n - 1) cout << '*'; 
    //         else cout << ' '; 
    //     }

    //     cout << endl; 
    // } 

    // hollow inverted half pyramid; 
    // for (int row = 0; row < n; row++) {
    //     for (int col = 0; col < n - row; col++) {
    //         if (col == 0 || col == n - row - 1 || row == 0 || row == n - 1) cout << '*'; 
    //         else cout << ' '; 
    //     }
    //     cout << endl; 
    // }

    // hollow full pyramid;
    // for (int row = 0; row < n; row++) {
    //     // printing spaces;
    //     for (int space = 0; space < n - row - 1; space++) cout << ' '; 
    //     // printing stars;
    //     for (int col = 0; col < 2 * row + 1; col++) {
    //         if (col == 0 || col == 2 * row || row == 0 || (row == n - 1 && col % 2 == 0)) cout << '*'; 
    //         else cout << ' '; 
    //     }
    //     cout << endl; 
    // } 

    // Numeric hollow half pyramid; 
    // int num = 2; 
    // for (int row = 0; row < n; row++) {
    //     for (int col = 0; col < 2 * row + 1; col++) {
    //         if (col == 0) cout << 1; 
    //         else if (col == 2 * row) cout << row + 1; 
    //         else if (row == n - 1 && col % 2 == 0) cout << num++; 
    //         else cout << ' '; 
    //     }

    //     cout << endl; 
    // } 

    // numeric hollow inverted half pyramid; 
    // int num = 1; 
    // for (int row = 0; row < n; row++) {
    //     for (int col = 0; col < 2 * (n - row) - 1; col++) {
    //         if (row == 0 && col % 2 == 0) cout << num++; 
    //         else if (col == 0) cout << row + 1; 
    //         else if (col == 2 * (n - row) - 2) cout << n; 
    //         else cout << ' '; 
    //     }
    //     cout << endl;  
    // }

    // Numeric palindrome equilateral pyramid; 
    // for (int row = 0; row < n; row++) {
    //     // print spaces;
    //     for (int space = 0; space < n - row - 1; space++) cout << ' '; 
    //     // print numbers;
    //     int col; 
    //     for (col = 0; col < row + 1; col++) cout << col + 1; 
    //     // print numbers reverse; 
    //     col -= 1; 
    //     for (int col2 = 0; col2 < row; col2++) cout << col--; 
    //     cout << endl; 
    // } 

    // Fancy pattern #1 
    // for (int row = 0; row < n; row++) {
    //     // printing left stars;
    //     for (int star = 0; star < n + 3 - row; star++) cout << '*'; 
    //     // printing numbers and stars;
    //     for (int col = 0; col < 2 * row + 1; col++) {
    //         if (col % 2 == 0) cout << row + 1; 
    //         else cout << '*';
    //     }
    //     // printing right stars;
    //     for (int star = 0; star < n + 3 - row; star++) cout << '*'; 
    //     cout << endl; 
    // }

    // Floyd's Triangle Pattern; 
    // int num = 1;
    // for (int row = 0; row < n; row++) {
    //     for (int col = 0; col < row + 1; col++) cout << num++ << " "; 
    //     cout << endl;   
    // } 

    // pascal triangle 
    // for (int row = 0; row < n; row++) {
    //     // print spaces;
    //     for (int space = 0; space < n - row - 1; space++) cout << ' ';     
    //     // print pascal triangle;
    //     for (int col = 0; col < row + 1; col++) cout << ncr(row, col) << ' '; 
    //     cout << endl; 
    // }

    // butterfly pattern; 
    // for (int row = 0; row < n; row++) {
    //     for (int col = 0; col < row + 1; col++) cout << '*'; 
    //     for (int space = 0; space < 2 * (n - row) - 1; space++) cout << ' '; 
    //     for (int col = 0; col < row + 1; col++) cout << '*'; 

    //     cout << endl; 
    // }

    // for (int row = 0; row < n; row++) {
    //     for (int col = 0; col < n - row; col++) cout << '*';
    //     for (int space = 0; space < 2 * row + 1; space++) cout << ' '; 
    //     for (int col = 0; col < n - row; col++) cout << '*';

    //     cout << endl; 
    // }
   
    return 0;
}