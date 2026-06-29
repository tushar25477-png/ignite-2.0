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
    
    int lcm(int a, int b) {
        // code here
        int g = gcd(a, b);
        return (a * b)/g;
    }
};
