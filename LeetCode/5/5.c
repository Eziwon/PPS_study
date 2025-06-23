char* longestPalindrome(char* s) {
    int len = strlen(s);
    int maxLen = 0;

    for (int l = len; l >= 1; l--) {
        for (int start = 0; start <= len - l; start++) {
            bool flag = true;
            for (int i = 0; i < l / 2; i++) {
                if (s[start + i] != s[start + l - i - 1]) flag = false;
            }
            if (flag) {
                char* result = (char*)malloc(sizeof(char) * (l + 1));
                strncpy(result, s+start, l);
                result[l] = '\0';
                return result;
            }
        }
    }

    char* empty = (char*)malloc(1);
    empty[0] = '\0';
    return empty;
}