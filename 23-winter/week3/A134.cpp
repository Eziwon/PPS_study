// LeetCode
// 2000. Reverse Prefix of Word

class Solution:
    def reversePrefix(self, word: str, ch: str) -> str:
        s = ''
        c = 0
        for i in word:
            if i == ch and c == 0:
                s += i
                s = s[::-1]
                c = 1
            else:
                s += i
        return s
      
