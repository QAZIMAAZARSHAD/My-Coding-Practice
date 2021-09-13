#include <bits/stdc++.h>
using namespace std;

class Solution{   
public:
    void leftRotate(int arr[], int n, int d) {
        
        reverse(arr, arr+d);
       
        reverse(arr+d, arr+n);
       
        reverse(arr, arr+n);
    
    }

};


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, d;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> d;
        Solution ob;
        ob.leftRotate(arr, n, d);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

/*
Input:
N = 7
Arr[] = {1, 2, 3, 4, 5, 6, 7}
D = 2
Output: 3 4 5 6 7 1 2
*/
