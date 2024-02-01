// LeetCode
// 441. Arranging Coins

class Solution {
public:
    int arrangeCoins(int n) {
        long long i = 0;
        while(n >= 0) {
            i++;
            n -= i;
        }
        return i - 1 ;
    }
};
