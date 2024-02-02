// LeetCode
// 448. Find All Numbers Disappeared in an Array

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int, int> m;
        for (int x : nums) m[x]++;
        for (int i = 1; i <= nums.size(); i++) {
            if (m[i] == 0) ans.push_back(i);
        }
        return ans;
    }
};
