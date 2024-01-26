// LeetCode
// 367. Valid Perfect Square

class Solution {
public:
    bool isPerfectSquare(int num) {
        long long n = 1;
        while(1) {
            long long sqrt = n * n;
            if (sqrt == num) {
                return true;
            } else if (sqrt < num) {
                n++;
            } else {
                break;
            }
        }
        return false;
    }
};
