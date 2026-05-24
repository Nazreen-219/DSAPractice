class Solution {
public:
    set<vector<int>> s;
    void helper(vector<int>& arr, int tar, int i , vector<int> &combn , vector<vector<int>> &ans){
      if(i==arr.size() || tar<0){
        return; 
      }
      if(tar == 0){
        if(s.find(combn) == s.end()){
          ans.push_back({combn});
          s.insert(combn);
        }
        
        return;
      }


      combn.push_back(arr[i]);
      helper(arr , tar-arr[i] , i+1 , combn , ans); //single inclusion 
      helper(arr , tar-arr[i] , i , combn , ans); //mulitple inlusion
      combn.pop_back();
      helper(arr , tar , i+1 , combn , ans);
    }
    vector<vector<int>> combinationSum(vector<int>& arr, int tar) {
        vector<vector<int>> ans;
        vector<int> combn;
        helper(arr , tar , 0 , combn , ans);

        return ans;
    }
};