//Given two integers L and R, write a program that finds the count of numbers having prime number of set bits in their binary representation in the range [L, R].

class Solution {
  public:
  
  bool isPrime(int n){
      int i;
      if(n<2){
          return false;
      }
      if(n==2 || n==3){
          return true;
      }
      if(n%2==0 || n%3==0){
          return false;
      }
      for(i=5;i*i<n;i+=6){
          if(n%i==0 || n%(i+2)==0){
              return false;
          }
      }
      return true;
  }
  
    int primeSetBits(int L, int R){
        int i,j,count,bits;
        for(i=L;i<=R;i++)
        {
            j=i;                        
            bits=0;                      // This code counts no. of 1 bits 
            while(j>0)                   // To count no. of 0 bits, initialize bits=1
            {
                bits+=j%2;
                j/=2;
            }                            
        if(isPrime(bits)){
            count++;
        }
    }
    return count;
    }
};


int main() {
    int t;
    cin >> t;
    while (t--) {
        int L, R;
        cin >> L >> R;
        Solution ob;
        cout<<ob.primeSetBits(L,R)<<endl;
    }
    return 0;
}

/*
Input: L = 6, R = 10
Output: 4
Explanation: 6, 7, 9, 10 having
prime set bits between 6 and 10. 

Input: L = 10, R = 15
Output: 5
Explanation: 10, 11, 12, 13, 14 having
prime set bits between 10 and 15.
*/
