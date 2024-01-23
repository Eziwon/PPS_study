// BaekJoon
// 9095. 1, 2, 3 더하기

#include <iostream>
using namespace std;

int main(){
    int t, n;
    int dp[12];
    
    cin >> t;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    
    for (int i = 0; i < t; i++) {
        cin >> n;
        for (int j = 4; j <= n; j++) {
            dp[j] = dp[j-1] + dp[j-2] + dp[j-3];
        }
        cout << dp[n] << endl;
    }
    
    return 0;
}
