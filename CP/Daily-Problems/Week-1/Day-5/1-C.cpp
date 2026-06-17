class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> freq(26,0);
        queue<int> q;
        int n=s.size();
        for(int i=0;i<n;i++){
            char ch=s[i];
            freq[ch-'a']++;
            q.push(i);
            while(!q.empty() && freq[s[q.front()]-'a']>1){
                q.pop();
            }
        }
        return q.empty() ? -1:q.front();
    }
};
