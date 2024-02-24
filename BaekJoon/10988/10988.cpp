// 팰린드롬인지 확인하기

#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    int len = s.length();
    for (int i = 0; i < len; i++) {
        if (s[i] != s[len-i-1]) {
            cout << '0' << endl;
            return 0;
        }
    }
    cout << '1' << endl;
    
    return 0;
}
