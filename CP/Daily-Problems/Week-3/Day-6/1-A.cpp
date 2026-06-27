class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        // code here
        int put = 0, read = 0;
        
        while (read < arr.size()) {
            if (arr[read] != 0) {
                arr[put] = arr[read];
                put++;
            } 
            read++;
        }
        
        for (int i = put; i < arr.size(); i++) {
            arr[i] = 0;
        }
    }
};
