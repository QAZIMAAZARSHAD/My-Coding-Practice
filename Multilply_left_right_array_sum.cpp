#include <bits/stdc++.h>
using namespace std;

int multiply(int arr[], int n);

int main() {
	//code
	int t;
	cin>>t;
	while (t--)
	{
	    int n,sum1=0,sum2=0;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    
	    cout << multiply(a, n) << endl;
	    
	}
	return 0;
}

int multiply(int arr[], int n)
{
    int i, sum1 = 0, sum2 =0, res;
    for(i=0;i<n/2;i++){
        sum1 += arr[i];
    }
    for(i=n/2;i<n;i++){
        sum2 += arr[i];
    }
    res = sum1 * sum2;
    return res;
}

/*
Input : arr[ ] = {1, 2, 3, 4}
Output : 21

Explanation:
Sum up an array from index 0 to 1 = 3
Sum up an array from index 2 to 3 = 7
Their multiplication is 21.
*/
