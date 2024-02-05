# LeetCode
# 344. Reverse String

class Solution:
    def reverseString(self, s: List[str]) -> None:
        l = len(s)-1
        for i in range(len(s)//2):
            temp = s[i]
            s[i] = s[l]
            s[l] = temp
            l -= 1
        
