// LeetCode
// 70. Climbing Stairs

class Solution {
public:
    int climbStairs(int n) {
        int count = 1;
        for (int i = 1; i <= n; i++) {
            double sum = 1;
            for (int j = i; j < 2*i; j++) {
                sum *= (double)(n - j) / (j - i + 1);
            }
            count += sum;
        }
        return count;
    }
};
