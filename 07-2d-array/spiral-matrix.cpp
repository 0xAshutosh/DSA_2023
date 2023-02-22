#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralArray(int arr[][100], int row, int col) {
    int rowStart = 0, rowEnd = row - 1, colStart = 0, colEnd = col - 1; 
    vector<int> ans;
    int j = 0;
    while (j < row * col) {
        for (int i = colStart; i < colEnd; i++) {
            ans.push_back(arr[rowStart][i]);
            j++;
        }
        // rowend--
        for (int i = rowStart; i < rowEnd; i++) {
            ans.push_back(arr[i][colEnd]);
            j++;
        }
        rowStart++;
        for (int i = colEnd; i >= colStart; i--) {
            ans.push_back(arr[rowEnd][i]);
            j++; 
        }
        rowEnd--; 

        for (int i = rowEnd; i >= rowStart; i--) {
            ans.push_back(arr[i][colStart]);
            j++;
        }
        
        colStart++;
        
    }

    return ans; 
}

int main() {
    int arr[100][100];

    int m, n;
    cin >> m >> n; 

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) cin >> arr[i][j];
    }

    // for (int i = 0; i < m; i++) {
    //     for (int j = 0; j < n; j++) cout << arr[i][j] << " ";
    //     cout << endl; 
    // }

    vector<int> ans = spiralArray(arr, m, n);

    for (int i = 0; i < ans.size(); i++) cout << ans[i] << " ";

    return 0; 
}