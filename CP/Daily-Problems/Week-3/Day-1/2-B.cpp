class Solution {
public:
  bool solve(string &s, int st, int end) {
    if (st >= end)
      return true;
    if (s[st] != s[end])
      return false;
    solve(s, st + 1, end - 1);
  }
  bool isPalindrome(string &s) {
    int st = 0, end = s.size() - 1;
    return solve(s, st, end);
  }
};