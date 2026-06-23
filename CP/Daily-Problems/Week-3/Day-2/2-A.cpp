class Solution {
    bool solve(vector<int>& arr, int low, int high, int k) {
        if (low > high)
            return false;

        int mid = low + (high - low) / 2;

        if (arr[mid] == k)
            return true;

        if (arr[mid] > k)
            return solve(arr, low, mid - 1, k);

        return solve(arr, mid + 1, high, k);
    }
    public:
    bool binarySearch(vector<int>& arr, int k) {
        return solve(arr, 0, arr.size() - 1, k);
    }
};