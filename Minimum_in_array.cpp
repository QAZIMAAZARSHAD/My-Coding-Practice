#include<bits/stdc++.h>
using namespace std;

int chocolates(int arr[], int n);

int main()
{
    
    int t;
    cin>> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        cout << chocolates(arr, n);
        cout << endl;
        
    }

}

int chocolates(int arr[], int n)
{
    int i, min = INT_MAX;
    for(i=0;i<n;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    return min;
    
}
