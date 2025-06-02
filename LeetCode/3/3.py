class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        maxLen=0
        start=0
        charSet=set()

        for end in range(len(s)):
            if s[end] not in charSet:
                charSet.add(s[end])
                maxLen = max(maxLen, end-start+1)
            else:
                while s[end] in charSet:
                    charSet.remove(s[start])
                    start=start+1
                charSet.add(s[end])
        
        return maxLen

        