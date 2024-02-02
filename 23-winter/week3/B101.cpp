// LeetCode
// 350. Intersection of Two Arrays II

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for (auto & n : nums1) {
            auto k = find(nums2.begin(), nums2.end(), n);
            if (k != nums2.end()) {
                nums2.erase(k);
                ans.push_back(n);
            }
        }
        return ans;
    }
};
