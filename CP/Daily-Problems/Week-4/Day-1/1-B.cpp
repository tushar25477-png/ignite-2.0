class Solution {
  public:
    vector<int> sieve(int n) {
        // code here
        vector<int> primes(n + 1, 1);
        
        primes[0] = primes[1] = 0;
        
        for (int i = 2; i*i <= n; i++) {
            if (primes[i] == 0) continue;
            
            for (int j = 2; j * i <= n; j++) {
                primes[j * i] = 0;
            }
        }
        
        vector<int> ans;
        for (int i = 1; i <= n; i++) {
            if (primes[i]) ans.push_back(i);
        }
        return ans;
    }
};
