class Solution {
  void solve(vector<int> &candidates, int target, int idx, vector<int> &curr,
             vector<vector<int>> &ans) {

    if (target == 0) {
      ans.push_back(curr);
      return;
    }

    if (idx == candidates.size() || target < 0)
      return;

    // Pick
    curr.push_back(candidates[idx]);
    solve(candidates, target - candidates[idx], idx, curr, ans);
    curr.pop_back();

    // Not Pick
    solve(candidates, target, idx + 1, curr, ans);
  }

public:
  vector<vector<int>> combinationSum(vector<int> &candidates, int target) {
    vector<vector<int>> ans;
    vector<int> curr;

    solve(candidates, target, 0, curr, ans);

    return ans;
  }
};