// solved on
// https://www.codingninjas.com/codestudio/problems/binary-to-decimal_893273?leftPanelTab=1

#include <bits/stdc++.h> 
#include <bits/stdc++.h> 


int convert(int N,string &str)
{
    // Write your code here.
    int ans = 0;
    for (int i = 0; i < N; i++) {
        int temp = str[i] - '0';
        ans = temp * pow(2, N - i - 1) + ans;
    }

    return ans;   
}