// Baekjoon
// 문제: 1157. 단어 공부

#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string word;
    cin >> word;
    
    int counts[26] = {0};
    for (int i = 0; i < word.size(); i++) {
        word[i] = toupper(word[i]);
        counts[word[i] - 65]++;
    }
    
    int max = 0;
    int idx;
    for (int i = 0; i < 26; i++) {
        if (max < counts[i]){
            max = counts[i];
            idx = i;
        }
    }
    
    int cnt = 0;
    for (int i = 0; i < 26; i++) {
        if (max == counts[i]) {
            cnt++;
            if (cnt > 1) {
                cout << "?" << endl;
                return 0;
            }
        }
    }
    
    cout << (char)(idx + 65) << endl;
    return 0;
}
