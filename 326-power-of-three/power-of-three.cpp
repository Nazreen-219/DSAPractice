class Solution {
public:
 bool helper(int n , long long  x){
    if(n==1 || x == n ) return true;
    if( x > n ){
        return false;
    }
   
    x = x*3;
    return  helper(n , x);
    
   }
    bool isPowerOfThree(int n) {
        if (n <= 0) return false;
        long long x = 3;
       bool ans =  helper(n , x);
       
       return ans;
    }
};