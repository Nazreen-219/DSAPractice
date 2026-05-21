class Solution {
public:
    
    void getTerms(vector<int> &nums , int idx , vector<vector<int>> &ans){
      if(idx == nums.size()) {
        ans.push_back({nums});
        return;
      }

      for(int i = idx ;  i <nums.size() ; i++){
        swap(nums[idx] , nums[i]);
        getTerms(nums , idx+1 , ans);
        swap(nums[idx] , nums[i]);
      }
    }
    vector<vector<int>> permute(vector<int>& nums) {
      int idx =0;
      vector<vector<int>> ans;
      getTerms(nums , idx , ans);
       return ans;   
    }
};