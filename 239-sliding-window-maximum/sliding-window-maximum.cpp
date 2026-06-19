class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int>dq;
        vector<int>res;
    //   for first window
        for(int i = 0 ; i <k ; i++){
            // for removing smaller element
            while(dq.size() >0 && nums[dq.back()] <= nums[i]){
                dq.pop_back();
            }

            dq.push_back(i);
        }
    //   for remaining window
        for(int i = k ; i <nums.size() ; i++){
            res.push_back(nums[dq.front()]);
            //for removing front element which does not belong to curr window
            while(dq.size() > 0 && dq.front() <= i-k){
                dq.pop_front();
            }

            while(dq.size() >0 && nums[dq.back()] <= nums[i]){
                dq.pop_back();
            }

            dq.push_back(i);
        }
        res.push_back(nums[dq.front()]);
        return res;
    }
};