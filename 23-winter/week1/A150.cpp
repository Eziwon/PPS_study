// BaekJoon
// 1912. 연속합

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    vector<int> num(n);
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    
    int d[n] = {0};
    int res = num[0];
    d[0] = num[0];
    for (int i = 1; i < n; i++) {
        d[i] = max(num[i], d[i-1] + num[i]);
        if (res < d[i]) {
            res = d[i];
        }
    }
    cout << res << endl;
    
    return 0;
}
