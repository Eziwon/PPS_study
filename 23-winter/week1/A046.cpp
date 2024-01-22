// Baekjoon
// 문제: 1159. 농구 경기

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int count[26] = {};
    
    for (int i = 0; i < N; i++) {
        string name;
        cin >> name;
        count[name[0] - 'a']++;
    }
    
    int predaja = 1;
    for (int i = 0; i < 26; i++) {
        if (count[i] >= 5) {
            cout << (char)(i + 'a');
            predaja = 0;
        }
    }
    
    if (predaja) cout << "PREDAJA" << endl;
    
    return 0;
}
