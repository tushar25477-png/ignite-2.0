class Solution {
  void solve(string &digits, int idx, string &curr, vector<string> &ans,
             vector<string> &mp) {

    if (idx == digits.size()) {
      ans.push_back(curr);
      return;
    }

    string letters = mp[digits[idx] - '0'];

    for (char ch : letters) {
      curr.push_back(ch);
      solve(digits, idx + 1, curr, ans, mp);
      curr.pop_back();
    }
  }

public:
  vector<string> letterCombinations(string digits) {
    vector<string> ans;

    if (digits.empty())
      return ans;

    vector<string> mp = {"",    "",    "abc",  "def", "ghi",
                         "jkl", "mno", "pqrs", "tuv", "wxyz"};

    string curr;
    solve(digits, 0, curr, ans, mp);

    return ans;
  }
};