#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int majorityElement(int a[], int n){
        sort(a,a+n);
        int i, count = 1, max = INT_MIN, major;
        if(n == 1){
            return a[0];
        }
        for(i=0;i<n-1;i++){
            if(a[i] == a[i+1]){
                count++;
                if(count>max){
                    max = count;
                    major = a[i];
                }
            }
            else{
                count = 1;
            }
        }
        if(max>n/2){
            return major;
        }
        return -1;
    }
};

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}


// Input:
// N = 5 
// A[] = {3,1,3,3,2} 
// Output:
// 3
// Explanation:
// Since, 3 is present more
// than N/2 times, so it is 
// the majority element.
