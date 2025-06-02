class Solution {
public:
    int lengthOfLongestSubstring(std::string s) {
        std::unordered_map<char, int> lastSeen;
        int maxLen = 0;
        int start = 0;

        for (int end = 0; end < s.length(); ++end) {
            char c = s[end];
            if (lastSeen.count(c) && lastSeen[c] >= start) {
                start = lastSeen[c] + 1;
            }
            lastSeen[c] = end;
            maxLen = std::max(maxLen, end - start + 1);
        }

        return maxLen;
    }
};