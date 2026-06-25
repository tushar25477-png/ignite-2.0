class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i = 0;
        int j = 0;
        int minl = 1e6;
        int sum = 0;

        while (j < nums.size()) {
            sum += nums[j];

            while (sum >= target) {
                int len = j - i + 1;
                minl = min(minl, len);

                sum -= nums[i];
                i++;
            }
            j++;
        }
        return minl == 1e6 ? 0 : minl;
    }
};
