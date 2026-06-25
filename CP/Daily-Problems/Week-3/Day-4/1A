class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        long long sum = 0;
        for (int i = 0; i < k; i++) sum += arr[i];
        long long msum = sum;
        
        for (int i = k; i < arr.size(); i++) {
            sum += arr[i] - arr[i - k];
            msum = max(msum, sum);
        }
        return msum;
    }
};
