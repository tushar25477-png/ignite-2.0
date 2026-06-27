class Solution {
public:
    int calc(vector<int>& height, int i, int j) {
        return (j - i) * min(height[i], height[j]);
    }

    int maxArea(vector<int>& height) {
        int i = 0, j = height.size() - 1;
        int m = calc(height, i, j);

        while (i < j) {
            m = max(m, calc(height, i, j));

            if (height[i] < height[j]) i++;
            else j--;
        }
        return m;
    }
};
