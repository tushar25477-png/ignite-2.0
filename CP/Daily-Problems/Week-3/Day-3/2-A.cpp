class Solution {
  void solve(vector<int> &arr, int idx, vector<int> &curr,
             vector<vector<int>> &ans) {

    if (idx == arr.size()) {
      ans.push_back(curr);
      return;
    }

    // Pick
    curr.push_back(arr[idx]);
    solve(arr, idx + 1, curr, ans);
    curr.pop_back();

    // Not Pick
    solve(arr, idx + 1, curr, ans);
  }

public:
  vector<vector<int>> subsets(vector<int> &arr) {
    vector<vector<int>> ans;
    vector<int> curr;

    solve(arr, 0, curr, ans);

    return ans;
  }
};