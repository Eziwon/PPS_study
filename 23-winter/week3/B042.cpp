// LeetCode
// 1221. Split a String in Balanced Strings

class Solution {
public:
    int balancedStringSplit(string s) {
        int cnt = 0, cnt_L = 0, cnt_R = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'L') cnt_L++;
            if (s[i] == 'R') cnt_R++;
            if (cnt_L == cnt_R) {
                cnt_L = 0;
                cnt_R = 0;
                cnt++;
            }
        }
        return cnt;
    }
};
