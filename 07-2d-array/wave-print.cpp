/*
    https://www.codingninjas.com/codestudio/problems/print-like-a-wave_893268?leftPanelTab=1
*/
#include <bits/stdc++.h> 
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    //Write your code here
    vector<int> ans;

    for (int i = 0; i < mCols; i++) {
        for (int j = 0; j < nRows && i % 2 == 0; j++) ans.push_back(arr[j][i]);

        for (int j = nRows - 1; j >= 0 && i % 2 != 0; j--) ans.push_back(arr[j][i]); 
    }

    return ans;  
}