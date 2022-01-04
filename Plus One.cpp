// Input: digits = [1,2,3]
// Output: [1,2,4]
// Explanation: The array represents the integer 123.
// Incrementing by one gives 123 + 1 = 124.
// Thus, the result should be [1,2,4].

class Solution{
public:
    vector<int> plusOne(vector<int>& a){
        int last = a.size()-1;
        while(last>=0){
            if(a[last] == 9){
                a[last] = 0;
            }
            else{
                a[last] += 1;
                return a;
            }
            last--;
        }
        a.insert(a.begin(),1);
        return a;
    }
};
