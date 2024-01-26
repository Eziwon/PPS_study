// LeetCode
// 258. Add Digits

class Solution {
public:
    int addDigits(int num) {
        int sum;
        while(1) {
            sum = 0;
            while(num > 9) {
                sum += (num % 10);
                num = num / 10;
            }
            sum += num;
            if (sum < 10) break;
            num = sum;
        }
        return sum;
    }
};
