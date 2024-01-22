// Baekjoon
// 문제: 1159. 농구 경기

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    cin.ignore();
    vector<string> ans(N);
    
    for (int i = 0; i < N; i++) {
        getline(cin, ans[i]);
    }
    
    for (int i = 0; i < N; i++) {
        int score = 1;
        int total = 0;
        for (char ch : ans[i]) {
            if (ch == 'X') {
                score = 0;
            }
            total += score;
            score++;
        }
        
        cout << total << endl;
    }
    
    return 0;
}
