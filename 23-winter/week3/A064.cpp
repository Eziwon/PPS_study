// LeetCode
// 1051. Height Checker

class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int count = 0;
        vector<int> temp;
        temp = heights;
        sort(heights.begin(), heights.end());
        for (int i = 0; i < heights.size(); i++) {
            if (heights[i] != temp[i]) count++;
        }
        return count;
    }
};
