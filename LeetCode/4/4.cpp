class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int size1 = nums1.size();
        int size2 = nums2.size();

        vector<int> merged;
        for (int i = 0; i < size1; i++) {
            merged.push_back(nums1[i]);
        }
        for (int i = 0; i < size2; i++) {
            merged.push_back(nums2[i]);
        }

        sort(merged.begin(), merged.end());

        int total_size = merged.size();

        if (total_size % 2 == 0) {
            return (merged[(total_size / 2) - 1] + merged[total_size / 2]) / 2.0;
        } else {
            return merged[total_size / 2];
        }
    }
};