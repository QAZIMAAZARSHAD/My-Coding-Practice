// Input:
// N = 6
// arr[] = {1,2,3,4,5,6}
// Output: 6 1 5 2 4 3
// Explanation: Max element = 6, min = 1, 
// second max = 5, second min = 2, and 
// so on... Modified array is : 6 1 5 2 4 3.


#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void rearrange(long long a[], int n) { 
    int i, min = 0, max = n-1;
    vector<int> v;
    while(min<=max){
        v.push_back(a[max]);
        v.push_back(a[min]);
        max--;
        min++;
    }
    for(i=0;i<n;i++){
        a[i] = v[i];
    }
    }
};

int main() 
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        long long arr[n];
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (int i = 0; i < n; i++) 
		    cout << arr[i] << " ";
		cout << endl;
    }
	return 0; 
} 
