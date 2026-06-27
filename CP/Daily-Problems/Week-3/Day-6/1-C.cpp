class Solution {
  public:
    int kthElement(vector<int> &a, vector<int> &b, int k) {
        // code here
        int i = 0, j = 0, val = 0;
        while (k--) {
            if (i == a.size()) val = b[j++];
            else if (j == b.size()) val = a[i++];
            else if (a[i] <= b[j]) val = a[i++];
            else val = b[j++];
        }
        
        return val;
    }
};
