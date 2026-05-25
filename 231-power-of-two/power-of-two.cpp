class Solution {
public:
   bool helper(int n , long long  x){
    if(n==1 || x == n ) return true;
    if(n %2 == 1 || x > n ){
        return false;
    }
   
    x = x*2;
   return  helper(n , x);
    
   }
    bool isPowerOfTwo(int n) {
        if (n <= 0) return false;
        long long x = 2;
       bool ans =  helper(n , x);
       
       return ans;
    }
};