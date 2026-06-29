class Solution {
  public:
    int gcd(int a, int b) {
        while (b != 0) {
            int temp = a;
            a = b;
            b = temp % b;
        }
        return a;
    }
    
    int gcd(int n, vector<int> arr) {
        // Your code goes here
        int res = arr[0];
        
        for (int i = 1; i < arr.size(); i++) {
            res = gcd(res, arr[i]);
            
            if (res == 1) return 1;
        }
        return res;
    }
};
