class Solution {
public:
     bool helper(int n , long long  x){
    if(n==1 || x == n ) return true;
    if(n %2 == 1 || x > n ){
        return false;
    }
   
    x = x*4;
    return  helper(n , x);
     }

    bool isPowerOfFour(int n) {
          if (n <= 0) return false;
        long long x = 4;
       bool ans =  helper(n , x);
       
       return ans;
    }
};