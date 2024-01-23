// BaekJoon
// 1439. 뒤집기

#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    
    int count = 0;
    for (int i = 1; i < s.size(); i++) {
        if (s[i] != s[i-1]) count++;
    }
    
    cout << (count + 1) / 2 << endl;
    
    return 0;
}
