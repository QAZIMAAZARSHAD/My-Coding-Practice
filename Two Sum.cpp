#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& a, int x) {
        int i, k = 0;
        vector<int> v;
        for(i=0;i<a.size();i++){
            if(a[k] + a[i] == x && k != i){
                v.push_back(k);
                v.push_back(i);
                break;
            }
            if(i == a.size()-1){
                k++;
                i = 0;
            }
        }
        return v;
    }
};


// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Output: Because nums[0] + nums[1] == 9, we return [0, 1].
