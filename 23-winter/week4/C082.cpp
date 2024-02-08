// LeetCode
// 347. Top K Frequent Elements

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for (auto n : nums) {
            mp[n]++;
        }
        vector<vector<int>> vec(nums.size() + 1);
        for (auto p = mp.begin(); p != mp.end(); p++) {
            vec[p->second].push_back(p->first);
        }

        vector<int> ans;
        for (int i = nums.size(); i >= 0; i--) {
            if (ans.size() >= k) break;
            if (!vec[i].empty()) {
                ans.insert(ans.end(), vec[i].begin(), vec[i].end());
            }
        }
        return ans;
    }
};
