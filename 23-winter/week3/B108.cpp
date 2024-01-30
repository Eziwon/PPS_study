// BaekJoon
// 14425. 문자열 집합

#include <iostream>
#include <set>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    cin.ignore();
    
    set<string> s;
    string str;
    for (int i = 0; i < n; i++) {
        cin >> str;
        s.insert(str);
    }
    
    int count = 0;
    for (int i = 0; i < m; i++) {
        cin >> str;
        if (s.find(str) != s.end()) count++;
    }
    
    cout << count << endl;
    
    return 0;
}
