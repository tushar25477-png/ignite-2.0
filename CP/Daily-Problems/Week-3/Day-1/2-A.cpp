class Solution {
  public:
    void solve(string &s,int st,int end){
     if(st>=end)
     return;
     swap(s[st],s[end]);
     solve(s,st+1,end-1);
    }
    string reverseString(string& s) {
     int st=0,end=s.size()-1;
     solve(s,st,end);
     return s;
    }
};
