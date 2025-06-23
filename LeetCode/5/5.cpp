class Solution {
public:
    string longestPalindrome(string s) {
        int len = s.size();

        for (int maxLen = len; maxLen >= 1; maxLen--) {
            for (int start = 0; start <= len-maxLen; start++) {
                bool isPal = true;
                for (int i = 0; i < maxLen / 2; i++) {
                    if (s[start + i] != s[start + maxLen - i - 1]) {
                        isPal = false;
                        break;
                    }
                }
                if (isPal) return s.substr(start, maxLen);
            }
        }

        return "";
    }
};