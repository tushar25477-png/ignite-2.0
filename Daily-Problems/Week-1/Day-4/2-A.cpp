class Solution {
public:
    int minLengthAfterRemovals(string s) {
        stack<char> st;
        for(char ch:s){
            if(st.empty() || st.top()==ch){
                st.push(ch);
            }else{
                st.pop();
            }
        }
        return st.size();
    }
};
