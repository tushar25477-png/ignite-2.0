class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        
        for (string& op : operations) {
            if (op == "+") {
                int a = st.top(); 
                st.pop();
                int b = st.top(); 
                int newScore = a + b;
                st.push(a);
                st.push(newScore);
            } 
            else if (op == "D") {
                st.push(2 * st.top());
            } 
            else if (op == "C") {
                st.pop();
            } 
            else {
                st.push(stoi(op));
            }
        }
        
        int totalSum = 0;
        while (!st.empty()) {
            totalSum += st.top();
            st.pop();
        }
        
        return totalSum;
    }
};
