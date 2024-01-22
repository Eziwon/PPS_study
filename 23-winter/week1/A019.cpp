// BaekJoon
// 문제: 2577. 숫자의 개수

#include <iostream>
#include <string>
using namespace std;

int main() {
    int count[10] = {};
    int a, b, c;
    
    cin >> a >> b >> c;
    
    int result = a * b * c;
    
    string s = to_string(result);
    
    for (char ch : s) {
        count[ch-'0']++;
    }
    
    for (int k : count) {
        cout << k << endl;
    }
    return 0;
}
