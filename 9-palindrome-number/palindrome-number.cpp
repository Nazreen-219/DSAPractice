class Solution {
public:
    bool isPalindrome(int x) {
        int st = 0;
        string str = to_string(x);
        int end = str.size()-1;

        while(st < end){
            if(str[st] != str[end]){
                return false;
            }
            st++ , end--;
        }

        return true;
    }
};