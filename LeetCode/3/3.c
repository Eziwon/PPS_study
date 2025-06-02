int lengthOfLongestSubstring(char* s) {
    int len = strlen(s);
    int maxLen = 0;
    int start = 0;

    int substrings[128];
    for (int i = 0; i < len; i++) {
        substrings[i] = -1;
    }

    for (int end = 0; end < len; end++) {
        char currChar = s[end];
        if(substrings[currChar] >= start) {
            start = substrings[currChar] + 1;
        }
        substrings[currChar] = end;
        int windowLen = end - start + 1;
        if (windowLen > maxLen) maxLen = windowLen;
    }

    return maxLen;
}