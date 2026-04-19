class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if (nums.size() == 0) return 0;
        int st = 0;
        int n = nums.size();
        int end = n-1;
        
        while(st <= end){
            if (nums[st] == val){
                swap(nums[st] , nums[end]);
                end--;
            }else{
                st++;
            }
        }
        return end+1;
        
    }
};