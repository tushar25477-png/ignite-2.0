class Solution {
  void solve(vector<int> &arr, int i, int &mini, int &maxi) {
    if (i == arr.size())
      return;

    mini = min(mini, arr[i]);
    maxi = max(maxi, arr[i]);

    solve(arr, i + 1, mini, maxi);
  }

public:
  vector<int> getMinMax(vector<int> &arr) {
    int mini = arr[0];
    int maxi = arr[0];

    solve(arr, 1, mini, maxi);

    return {mini, maxi};
  }
};