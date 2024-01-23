// BaekJoon
// 1302. 베스트셀러

#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main(){
    int N;
    cin >> N;
    
    map<string, int> m;
    string book;
    for (int i = 0; i < N; i++) {
        cin >> book;
        m[book]++;
    }
    
    int res = 0;
    for (auto i = m.begin(); i != m.end(); i++) {
        res = max(res, i->second);
    }
    
    for (auto i = m.begin(); i != m.end(); i++){
        if (res == i->second) {
            cout << i->first << endl;
            return 0;
        }
    }
    
    return 0;
}
