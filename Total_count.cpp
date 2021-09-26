// Given an array Arr of N positive integers and a number K where K is used as a threshold value to divide each element of the array into sum of different numbers.
// Find the sum of count of the numbers in which array elements are divided.

#include <bits/stdc++.h>
using namespace std;

class Solution{   
public:
    int totalCount(int arr[], int n, int k) {
    
    int i, count = 0;
    for(i=0;i<n;i++){
        if(arr[i]%k > 0){
        count += 1;
    }
        count += arr[i]/k;
    }
    
    return count;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.totalCount(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}

// Example 1:

// Input:
// N = 4, K = 3
// Arr[] = {5, 8, 10, 13}
// Output: 14
// Explanation: Each number can be expressed as sum 
// of different numbers less than or equal to K as
// 5 (3 + 2), 8 (3 + 3 + 2), 10 (3 + 3 + 3 + 1), 
// 13 (3 + 3 + 3 + 3 + 1). So, the sum of count 
// of each element is (2+3+4+5)=14.

// Example 2:

// Input:
// N = 5, K = 4
// Arr[] = {10, 2, 3, 4, 7}
// Output: 8
// Explanation: Each number can be expressed as sum of
// different numbers less than or equal to K as
// 10 (4 + 4 + 2), 2 (2), 3 (3), 4 (4) and 7 (4 + 3).
// So, the sum of count of each element is 
// (3 + 1 + 1 + 1 + 2) = 8.
