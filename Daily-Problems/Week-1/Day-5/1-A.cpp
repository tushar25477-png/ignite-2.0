class Solution {
public:
    int timeRequiredToBuy(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = 0;
        for(int i = 0;i < n; i++){
            if(i <= k) ans += min(nums[i],nums[k]);
            else ans += min(nums[i],nums[k]-1); 
        }
        return ans;
    }
};
