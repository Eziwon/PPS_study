# LeetCode
# 168. Excel Sheet Column Title

class Solution:
    def convertToTitle(self, columnNumber: int) -> str:
        output = ""
        while columnNumber:
            output = chr(ord('A') + (columnNumber - 1) % 26) + output
            columnNumber = (columnNumber - 1) // 26
        
        return output
        
